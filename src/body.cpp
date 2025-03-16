#include "physics/body.hpp"

#include <cmath>

[[nodiscard]] double Body::getKineticEnergy() const
{
    return m_mass * m_velocity.getVectorLength() * m_velocity.getVectorLength() / 2.0;
};

[[nodiscard]] Vector2D Body::getDistanceToOtherBody(const Body& other) const {
    return Vector2D{m_position.x - other.m_position.x, m_position.y - other.m_position.y}; ;
}