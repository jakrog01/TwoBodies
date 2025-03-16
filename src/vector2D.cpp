#include <physics/vector2D.hpp>
#include <cmath>

[[nodiscard]] double Vector2D::getVectorLength() const {
    return {sqrt(x*x + y*y)};
}

[[nodiscard]] double Vector2D::distanceBetweenVectors(const Vector2D &other) const {
    return {sqrt(pow(other.x -x,2) + pow(other.y - y,2))};
};