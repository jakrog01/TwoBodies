#include "physics/body.hpp"

[[nodiscard]] double Body::getKineticEnergy() const
{
    return m_mass * m_velocity.getVectorLength() * m_velocity.getVectorLength() / 2.0;
};