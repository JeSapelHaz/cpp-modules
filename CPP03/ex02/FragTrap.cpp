/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 13:32:45 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/16 16:51:18 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hit = 100;
    _energy = 100;
    _attack = 30;
    std::cout << "FragTrap " << _name << " is created." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " is destroyed." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    *this = other;
    std::cout << "FragTrap copy constructor." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_hit = other._hit;
        this->_energy = other._energy;
        this->_attack = other._attack;
    }
    std::cout << "FragTrap copy assignment operator." << std::endl;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High Five Brother from : FragTrap " << _name << std::endl;
}
