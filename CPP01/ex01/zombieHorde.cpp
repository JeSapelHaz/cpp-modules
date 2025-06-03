/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:24:29 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/03 16:48:55 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie *arrayZ = new Zombie[N];

    while (i < N)
    {
        arrayZ[i].setName(name);
        i++;
    }
    return arrayZ;
}