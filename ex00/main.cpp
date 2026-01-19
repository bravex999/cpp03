#include "ClapTrap.hpp"

int main()
{
    ClapTrap hero("Mario");
    ClapTrap copy(hero);
    
    hero.attack("Goomba");
    hero.takeDamage(5);
    hero.beRepaired(3);

    for (int i = 0; i < 12; i++)
        hero.attack("Bowser");

    hero.takeDamage(100);
    hero.beRepaired(10);

    return 0;
}
