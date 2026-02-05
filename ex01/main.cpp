/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:17:39 by chnaranj          #+#    #+#             */
/*   Updated: 2026/02/04 12:17:41 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "--- TESTING CLAPTRAP ---" << std::endl;
    ClapTrap a("Robot_1");
    a.attack("Zombie_1");
    a.takeDamage(5);
    a.beRepaired(2);

    std::cout << "\n--- TESTING SCAVTRAP ---" << std::endl;
    ScavTrap b("Robot_2");
    b.attack("Zombie_2"); 
    b.takeDamage(99);    
    b.beRepaired(50);
    b.guardGate();

    std::cout << "\n--- DESTRUCTORS ---" << std::endl;
    return 0;
}
