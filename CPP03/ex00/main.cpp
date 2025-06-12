/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:46:30 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/12 16:06:46 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    // ClapTrap first("Haz");

    // first.attack("Hugo");
    // first.attack("Hugo");
    // first.attack("Hugo");
    // first.attack("Hugo");
    // first.attack("Hugo");
    // first.attack("Hugo");
    // first.attack("Hugo");
    // first.attack("Hugo");
    // first.attack("Hugo");
    // first.attack("Hugo");
    // first.attack("Hugo");
    // first.attack("Hugo");
    // first.attack("Hugo");
    // first.attack("Hugo");

    ClapTrap c1("Alpha");

    c1.attack("TargetDummy");
    c1.takeDamage(5);
    c1.beRepaired(3);
    c1.takeDamage(9);
    c1.attack("TargetDummy");
    c1.beRepaired(10);

    return 0;
}