//
// Created by jakub on 16.03.2025.
//

#ifndef ALGORITHMBASE_HPP
#define ALGORITHMBASE_HPP

#include "physics/body.hpp"
#include "physics/vector2D.hpp"

class AlgorithmBase {
    public:
        virtual void nextStep (Body& body1, Body& body2) = 0;
        AlgorithmBase() = default;
        virtual ~AlgorithmBase() = default;

    protected:
     [[nodiscard]] Vector2D calculateForce(const Body& body1, const Body& body2) const;
     [[nodiscard]] double calculatePotential(const Body& body1, const Body& body2) const;
};

#endif //ALGORITHMBASE_HPP
