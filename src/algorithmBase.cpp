//
// Created by jakub on 16.03.2025.
//
#include "algorithms/algorithmBase.hpp"
#include "physics/body.hpp"
#include "Constants.hpp"
#include "cmath"

[[nodiscard]] Vector2D AlgorithmBase::calculateForce (const Body& body1, const Body& body2) const
{
    Vector2D relative_position = body1.getDistanceToOtherBody(body2);
    double relative_position_length = relative_position.getVectorLength();

    // Fx = GMm x / r^3
    double const Fx { Constants::G * body1.getMass() * body2.getMass() * relative_position.x
                    / pow(relative_position_length, 3) };
    // Fy = GMm y / r^3
    double const Fy { Constants::G * body1.getMass() * body2.getMass() * relative_position.y
                    / pow(relative_position_length, 3) };

    return Vector2D{Fx, Fy};
}

double AlgorithmBase::calculatePotentialEnergy(const Body &body1, const Body &body2) const
{
    Vector2D relative_position = body1.getDistanceToOtherBody(body2);
    return -1 * Constants::G * body1.getMass() * body2.getMass() / relative_position.getVectorLength();
}
