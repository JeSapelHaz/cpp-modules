/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:29:32 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/13 13:20:30 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name <<" is destroyed." << std::endl;
}
        
void Zombie::announce(void)
{
     std::cout << _name << " : BraiiiiiiinnnzzzZ" << std::endl;
}