/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:24:09 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/03 16:50:06 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombies;

    zombies = zombieHorde(5, "Zombie");
    zombies[0].announce();
    zombies[1].announce();
    zombies[2].announce();
    zombies[3].announce();
    zombies[4].announce();
    return 0;
}