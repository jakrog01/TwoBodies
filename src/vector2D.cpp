#include <physics/vector2D.hpp>
#include <cmath>

[[nodiscard]] double Vector2D::getVectorLength() const {
    return {sqrt(x*x + y*y)};
}