#include <iostream>
#include "physics/body.hpp"

int main() {
    auto body1 = Body(2.0, 0.0, 0.0, 1.0,  0.1 );
    auto body2 = Body(0.0, 0.0, 0.0, 0.0, 500.0);

    std::cout << "Kinetic energy: " << body1.getKineticEnergy() << std::endl;
    std::cout << "Kinetic energy: " << body2.getKineticEnergy() << std::endl;
    return 0;
}
