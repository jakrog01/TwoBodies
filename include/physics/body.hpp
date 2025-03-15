//
// Created by jakub on 15.03.2025.
//
#ifndef BODY_HPP
#define BODY_HPP

#include "physics/vector2D.hpp"

class Body {
public:
    explicit Body(const double positionX, const double positionY, const double velocityX,
        const double velocityY, const double mass)
            : m_position{positionX, positionY}
            , m_velocity{velocityX, velocityY}
            , m_momentum{velocityX * mass, velocityY * mass}
            , m_mass{mass}
        {};

    [[nodiscard]] double getKineticEnergy() const;

    private:
    Vector2D m_position {};
    Vector2D m_velocity {};
    Vector2D m_momentum{};
    double m_mass{};
};

#endif //BODY_HPP
