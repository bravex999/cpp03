/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:19:25 by chnaranj          #+#    #+#             */
/*   Updated: 2026/02/04 12:19:29 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "\n// ClapTrap basic actions\n";
    ClapTrap mario("Mario");
    mario.attack("Goomba");
    mario.takeDamage(5);
    mario.beRepaired(3);

    std::cout << "\n// ScavTrap basic actions\n";
    ScavTrap luigi("Luigi");
    luigi.attack("Koopa");
    luigi.takeDamage(20);
    luigi.beRepaired(10);
    luigi.guardGate();

    std::cout << "\n// FragTrap basic actions\n";
    FragTrap peach("Peach");
    peach.attack("Goomba");
    peach.takeDamage(30);
    peach.beRepaired(10);
    peach.highFivesGuys();

    std::cout << "\n// FragTrap copy constructor\n";
    FragTrap daisy(peach);
    daisy.attack("Koopa Troopa");
    daisy.highFivesGuys();

    std::cout << "\n// FragTrap assignment operator\n";
    FragTrap yoshi("Yoshi");
    yoshi = peach;
    yoshi.attack("Bowser Jr");

    std::cout << "\n// FragTrap low energy\n";
    for (int i = 0; i < 110; i++)
        peach.beRepaired(1);
    peach.attack("Bowser");

    std::cout << "\n// FragTrap zero hit points\n";
    peach.takeDamage(10000);
    peach.attack("Boo");
    peach.highFivesGuys();
    peach.beRepaired(10);

    return 0;
}
