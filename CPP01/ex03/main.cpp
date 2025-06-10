/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:10:21 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/10 13:21:44 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main() 
{
    {
        Weapon club = Weapon("crude spiked club");

        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    // ================================= SUJET
    // Weapon club = Weapon("crude spiked club");
    // std::cout << club.getType() << std::endl;
    // HumanA humanA("fred", club);
    // humanA.attack();

    // HumanB humanB("leo");
    // humanB.attack();
    // humanB.setWeapon(club);
    // humanB.attack();
    return 0;
}