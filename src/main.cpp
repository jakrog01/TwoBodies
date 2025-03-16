#include <iostream>
#include <memory>
#include "physics/body.hpp"
#include "simulation.hpp"
#include "algorithms/eulerAlgorithm.hpp"


int main() {
    int constexpr simulation_steps = 53500 ;

    auto body1 = Body(2.0, 0.0, 0.0, 1.0,  0.1 );
    auto body2 = Body(0.0, 0.0, 0.0, 0.0, 500.0);
    auto simulation = Simulation{std::make_unique<EulerAlgorithm>(), simulation_steps,
        body1, body2};

    if (auto error_detected {simulation.run()})
    {
        std::cout << "Error detected during simulation\n";
        return 1;
    }

    std::cout << "Simulation completed\n";
    return 0;
}
