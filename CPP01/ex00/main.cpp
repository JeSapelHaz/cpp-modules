/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:38:06 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/03 16:17:25 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie1;
    Zombie *zombie2;
    Zombie *zombie3;
    
    zombie1 = newZombie("Zombie 1");
    zombie2 = newZombie("Zombie 2");
    zombie3 = newZombie("Zombie 3");
    
    zombie1->announce();
    zombie2->announce();
    // zombie3->announce();
    
    randomChump("Zombie 4");
    // randomChump("Zombie 5");
    
    delete zombie1;
    delete zombie2;
    delete zombie3;
    return 0;
}