/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:46:30 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/16 16:40:34 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "=====================================\n";
    ClapTrap clap("Willy");
    ScavTrap scav("Serena");

    std::cout << "=====================================\n";
    scav.attack("a wild robot");
    clap.attack("a wild robot");

    std::cout << "=====================================\n";
    scav.takeDamage(30);
    clap.takeDamage(30);

    std::cout << "=====================================\n";
    scav.beRepaired(20);
    clap.beRepaired(20);

    std::cout << "=====================================\n";
    scav.guardGate();
    // clap.guardGate();

    std::cout << "=====================================\n";
    return 0;
}