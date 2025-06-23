/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 14:53:49 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 16:09:59 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private :
        AMateria *_objects[4];
        std::string _name;
        int _sizeObjects;
        
    public :
        Character();
        Character(std::string name);
        ~Character();
        Character(const Character &other);
        Character &operator=(const Character &other);
        
        const std::string & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

