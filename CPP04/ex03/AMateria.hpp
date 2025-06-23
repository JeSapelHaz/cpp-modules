/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 14:18:17 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 16:55:47 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected :
        std::string _type;
        
    public :
        AMateria();
        AMateria(std::string const & type);
        virtual ~AMateria();
        AMateria(const AMateria &other);
        AMateria &operator=(const AMateria &other);
        
        const std::string & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
};