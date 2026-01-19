#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "--- CLAPTRAP TEST ---" << std::endl;
    ClapTrap clap("Clappy");
    clap.attack("Target");

    std::cout << "\n--- SCAVTRAP TEST ---" << std::endl;
    ScavTrap scav("Scavvy");
    scav.attack("Target");
    scav.guardGate();

    std::cout << "\n--- FRAGTRAP TEST ---" << std::endl;
    FragTrap frag("Fraggy");
    frag.attack("Target");
    frag.highFivesGuys();
    frag.takeDamage(50);
    frag.beRepaired(20);

    std::cout << "\n--- DESTRUCTORS ---" << std::endl;
    return 0;
}
