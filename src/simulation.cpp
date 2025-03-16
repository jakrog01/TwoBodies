#include "simulation.hpp"
#include <fstream>
#include <vector>

[[nodiscard]] bool Simulation::run()
{
    std::ofstream result_file("simulation_results.txt");
    if (!result_file)
    {
        return true;
    }

    constexpr int safe_save_interval = 1000;
    using SimulationState = std::tuple<Body, Body, double>;
    std::vector<SimulationState> results;
    results.reserve(safe_save_interval);

    for(int t = 0; t < m_steps; ++t)
    {
        double potential_energy = m_algorithm->calculatePotentialEnergy(m_body1, m_body2);
        results.emplace_back(m_body1, m_body2, potential_energy);

        m_algorithm->nextStep(m_body1, m_body2);

        if (t % safe_save_interval == 0 && t > 0)
        {
            for (const auto& [b1, b2, potential_energy] : results)
            {
                result_file << b1 << " " << b2 << " " << potential_energy << '\n';
            }
            results.clear();
        }
    }

    for (const auto& [b1, b2, potential_energy] : results)
    {
        result_file << b1 << " " << b2 << " " << potential_energy << '\n';
    }

    return false;
}
