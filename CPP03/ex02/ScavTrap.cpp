/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:14:39 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/13 14:19:43 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    // _name = name;
    _hit = 100;
    _energy = 50;
    _attack = 20;
    std::cout << "ScavTrap " << _name << " is created." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " is destroyed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    *this  = other;
    std::cout << "ScavTrap copy constructor." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap copy assignment operator." << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hit = other._hit;
        this->_energy = other._energy;
        this->_attack = other._attack;
    }
    return *this;
}        

void ScavTrap::attack(const std::string& target)
{
    if (_energy > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
        _energy--;
    }
    else
        std::cout << _name << " has no enough energy." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode." << std::endl;
}