#ifndef INC_VECTOR2D_HPP
#define INC_VECTOR2D_HPP


struct Vector2D
{
    double x {0.0};
    double y {0.0};
    [[nodiscard]] double getVectorLength() const;
};
#endif
