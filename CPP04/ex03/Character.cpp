/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:47:29 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 17:08:58 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Unnamed"), _sizeObjects(0) 
{
    for (int i = 0; i < 4; ++i)
        this->_objects[i] = NULL;
    std::cout << "A character is created." << std::endl;
}

Character::Character(std::string name)
{
    _name = name;
    _sizeObjects = 0;
    for (int i = 0; i < 4; i++)
		this->_objects[i] = NULL;
    std::cout << "A character is created." << std::endl;
}

Character::~Character()
{
    for (int i = 0; i < _sizeObjects; i++)
		delete this->_objects[i];
    std::cout << "A character is destroyed." << std::endl;
}

Character::Character(const Character &other)
{
    std::cout << "Copy constructor of Characted called." << std::endl;
    *this = other;
}

Character& Character::operator=(const Character &other)
{
    _name = other._name;
    _sizeObjects = other._sizeObjects;
    for (int i = 0; i < 4; i++)
    {
        if (other._objects[i])
            this->_objects[i] = other._objects[i]->clone();
        else
            this->_objects[i] = NULL;
    }
    std::cout << "Copy assignment constructor of AMateria called." << std::endl;
    return (*this);
}

const std::string & Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    if (_sizeObjects >= 3)
        return ;
    _objects[_sizeObjects] = m;
    _sizeObjects++;
}

void Character::unequip(int idx) 
{
    if (idx < 0 || idx >= _sizeObjects)
        return;
    for (int i = idx; i < 3; ++i)
        _objects[i] = _objects[i + 1];
    _objects[3] = NULL;
    _sizeObjects--;
}


void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= _sizeObjects)
        return ;
    if (_objects[idx])
    _objects[idx]->use(target);
}