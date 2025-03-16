//
// Created by jakub on 15.03.2025.
//
#ifndef BODY_HPP
#define BODY_HPP

#include "physics/vector2D.hpp"
#include <iostream>

class Body {
public:
    explicit Body(const double positionX, const double positionY, const double velocityX,
        const double velocityY, const double mass)
            : m_position{positionX, positionY}
            , m_velocity{velocityX, velocityY}
            , m_momentum{velocityX * mass, velocityY * mass}
            , m_mass{mass}
        {};

    [[nodiscard]] double getMass() const { return m_mass; }

    [[nodiscard]] Vector2D getDistanceToOtherBody(const Body& other) const;
    [[nodiscard]] double getKineticEnergy() const;

    [[nodiscard]] Vector2D getPosition() const { return m_position;}
    [[nodiscard]] Vector2D getVelocity() const { return m_velocity;}
    [[nodiscard]] Vector2D getMomentum() const { return m_momentum;}

    void setPosition(const Vector2D position) {m_position = position;}
    void setVelocity(const Vector2D velocity) {m_velocity = velocity;}
    void setMomentum(const Vector2D momentum) {m_momentum = momentum;}

    friend std::ostream& operator<<(std::ostream& os, const Body& body);

    private:
    Vector2D m_position {};
    Vector2D m_velocity {};
    Vector2D m_momentum{};
    double m_mass{};
};

#endif //BODY_HPP
