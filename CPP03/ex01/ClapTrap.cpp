/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:47:03 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/13 13:51:30 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hit = 10;
    _energy = 10;
    _attack = 0;
    std::cout << "ClapTrap " << _name << " is created." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " is destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this  = other;
    std::cout << "ClapTrap copy constructor." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_hit = other._hit;
        this->_attack = other._energy;
        this->_energy = other._attack;
    }
    std::cout << "ClapTrap copy assignment operator." << std::endl;
    return *this;
}        

void ClapTrap::attack(const std::string& target)
{
    if (_energy > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
        _energy--;
    }
    else
        std::cout << _name << " has no enough energy." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hit = _hit - amount;
    if (_hit < 0)
        _hit = 0;
    std::cout << _name << " takes " << amount << " points of damage. HP : " << _hit << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy > 0)
    {
        _hit = _hit + amount;
        _energy--;
        std::cout << _name << " repairs " << amount << " points of life. HP : " << _hit << std::endl;
    }
    else
        std::cout << _name << " has no enough energy." << std::endl;
}