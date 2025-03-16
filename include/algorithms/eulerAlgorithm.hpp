//
// Created by jakub on 16.03.2025.
//

#ifndef EULERALGORITHM_HPP
#define EULERALGORITHM_HPP
#include "algorithmBase.hpp"

class EulerAlgorithm: AlgorithmBase
{
    public:
        void nextStep (Body& body1, Body& body2) override;
};

#endif //EULERALGORITHM_HPP
