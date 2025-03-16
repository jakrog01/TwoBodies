//
// Created by jakub on 16.03.2025.
//

#include "algorithms/eulerAlgorithm.hpp"

#include <cmath>

#include "constants.hpp"

inline Vector2D computeNextPosition(const Body& body, const Vector2D& force) {
    double const new_x = body.getPosition().x + Constants::dt * body.getVelocity().x
                   + (pow(Constants::dt, 2) * force.x) / (2 * body.getMass());

    double const new_y = body.getPosition().y + Constants::dt * body.getVelocity().y
                   + (pow(Constants::dt, 2) * force.y) / (2 * body.getMass());

    return {new_x, new_y};
}

inline Vector2D computeNextMomentum(const Body& body, const Vector2D& force) {
    double const new_px = body.getMomentum().x + Constants::dt * force.x;

    double const new_py = body.getMomentum().x + Constants::dt * force.y;;

    return {new_px, new_py};
}

void EulerAlgorithm::nextStep (Body& body1, Body& body2)
{
    const Vector2D impact_force {calculateForce(body1, body2)};

    const Vector2D new_r1 = {computeNextPosition(body1, impact_force)};
    const Vector2D new_r2 = {computeNextPosition(body2, impact_force)};

    const Vector2D new_p1 = {computeNextMomentum(body1, impact_force)};
    const Vector2D new_p2 = {computeNextMomentum(body2, impact_force)};

    body1.setPosition(new_r1);
    body2.setPosition(new_r2);

    body1.setMomentum(new_p1);
    body2.setMomentum(new_p2);
}