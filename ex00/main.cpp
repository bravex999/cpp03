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
