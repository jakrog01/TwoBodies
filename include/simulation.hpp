//
// Created by jakub on 16.03.2025.
//

#ifndef SIMULATION_HPP
#define SIMULATION_HPP

#include "algorithms/algorithmBase.hpp"
#include "physics/body.hpp"
#include <memory>

class Simulation {
    public:
    explicit Simulation(std::unique_ptr<AlgorithmBase> alg, const int nSteps, Body& body1, Body& body2)
        :m_algorithm(std::move(alg))
        ,m_steps {nSteps}
        ,m_body1 {body1}
        ,m_body2 {body2}
    {}

    [[nodiscard]] bool run();

    private:
        std::unique_ptr<AlgorithmBase> m_algorithm;
        int m_steps {};

        Body& m_body1;
        Body& m_body2;
};

#endif //SIMULATION_HPP
