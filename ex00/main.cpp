/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:15:54 by chnaranj          #+#    #+#             */
/*   Updated: 2026/02/04 12:15:57 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "\n// basic actions\n";
    ClapTrap mario("Mario");
    mario.attack("Goomba");
    mario.takeDamage(5);
    mario.beRepaired(3);

    std::cout << "\n// test copy constructor\n";
    ClapTrap luigi(mario);
    luigi.attack("Koopa");
    luigi.beRepaired(1);

    std::cout << "\n// test assignment operator\n";
    ClapTrap peach("Peach");
    peach = mario;
    peach.attack("Bowser Jr");

    std::cout << "\n// test low energy\n";
    for (int i = 0; i < 12; i++)
        mario.attack("Bowser");

    std::cout << "\n// test zero hit points\n";
    mario.takeDamage(100);
    mario.attack("Boo");
    mario.beRepaired(10);

    return 0;
}
