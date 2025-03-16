#include "physics/body.hpp"

#include <cmath>

[[nodiscard]] double Body::getKineticEnergy() const
{
    return m_mass * m_velocity.getVectorLength() * m_velocity.getVectorLength() / 2.0;
};

[[nodiscard]] Vector2D Body::getDistanceToOtherBody(const Body& other) const {
    return Vector2D{other.m_position.x - m_position.x, other.m_position.y - m_position.y}; ;
}

std::ostream& operator<<(std::ostream& os, const Body& body) {
    return os << body.getPosition().x << " " << body.getPosition().y << " " << " " << body.getKineticEnergy();
}