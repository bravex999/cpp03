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
    std::cout << "\n// basic actions\n";
    ScavTrap luigi("Luigi");
    luigi.attack("Goomba");
    luigi.takeDamage(20);
    luigi.beRepaired(10);
    luigi.guardGate();

    std::cout << "\n// test copy constructor\n";
    ScavTrap mario(luigi);
    mario.attack("Koopa");
    mario.guardGate();

    std::cout << "\n// test assignment operator\n";
    ScavTrap yoshi("Yoshi");
    yoshi = luigi;
    yoshi.attack("Bowser");

    std::cout << "\n// test low energy\n";
    for (int i = 0; i < 55; i++)
        luigi.attack("Koopa Troopa");
    luigi.beRepaired(1);

    std::cout << "\n// test zero hit points\n";
    luigi.takeDamage(1000);
    luigi.attack("Boo");
    luigi.guardGate();

    return 0;
}
