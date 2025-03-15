#include <iostream>
#include "physics/body.hpp"

int main() {
    auto body1 = Body(2.0, 0.0, 0.0, 100.0,  0.1 );
    std::cout << "Kinetic energy: " << body1.getKineticEnergy() << std::endl;
    return 0;
}
