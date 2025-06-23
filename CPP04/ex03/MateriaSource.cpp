/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 16:14:02 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 17:12:01 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() 
{
    for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
    std::cout << "A MateriaSource is created." << std::endl;
    
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < _sizeMaterias; i++)
		delete _materias[i];
    std::cout << "A MateriaSource is destroyed." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
    _sizeMaterias = other._sizeMaterias;
    for (int i = 0; i < _sizeMaterias; i++)
		_materias[i] = other._materias[i];
    return (*this);
}

AMateria* MateriaSource::createMateria(std::string const & type) 
{
    for (int i = 0; i < 4; ++i) {
        if (_materias[i] && _materias[i]->getType() == type)
            return _materias[i]->clone();
    }
    return NULL;
}


void MateriaSource::learnMateria(AMateria* m)
{
    if (_sizeMaterias > 3)
        return ;
    _materias[_sizeMaterias] = m;
    _sizeMaterias++;
}