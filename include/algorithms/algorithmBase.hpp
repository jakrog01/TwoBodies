//
// Created by jakub on 16.03.2025.
//

#ifndef ALGORITHMBASE_HPP
#define ALGORITHMBASE_HPP

#include "physics/body.hpp"
#include "physics/vector2D.hpp"

class algorithmBase {
    private:
     [[nodiscard]] Vector2D calculateForce(const Body& body1, const Body& body2) const;
     [[nodiscard]] double calculatePotential(const Body& body1, const Body& body2) const;

    public:
        virtual void nextStep (Body& body1, Body& body2) {};
        ~algorithmBase() = default;
};

#endif //ALGORITHMBASE_HPP
