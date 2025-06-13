/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:46:30 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/13 13:57:31 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "=====================================\n";
    FragTrap ft("Terminator");

    std::cout << "=====================================\n";
    ft.attack("a random target");
    ft.takeDamage(20);
    ft.beRepaired(15);
    ft.highFivesGuys();

    std::cout << "=====================================\n";
    FragTrap copy(ft);

    std::cout << "=====================================\n";
    FragTrap assigned("AnotherOne");
    assigned = ft;

    std::cout << "=====================================\n";
    return 0;
}