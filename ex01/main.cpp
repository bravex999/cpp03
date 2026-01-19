#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "--- TESTING CLAPTRAP ---" << std::endl;
    ClapTrap a("Steve");
    a.attack("Zombie");
    a.takeDamage(5);
    a.beRepaired(2);

    std::cout << "\n--- TESTING SCAVTRAP ---" << std::endl;
    ScavTrap b("Alex");
    b.attack("Creeper"); 
    b.takeDamage(99);    
    b.beRepaired(50);
    b.guardGate();

    std::cout << "\n--- DESTRUCTORS ---" << std::endl;
    return 0;
}
