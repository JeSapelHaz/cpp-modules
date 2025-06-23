/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:11:28 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 16:37:38 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* _materias[4];
        int _sizeMaterias;
        
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource &other);
        MateriaSource &operator=(const MateriaSource &other);
        
        virtual AMateria* createMateria(std::string const & type);
        virtual void learnMateria(AMateria* m);
};