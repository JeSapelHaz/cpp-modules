/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 14:42:22 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 16:56:42 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
    public :
        Ice();
        ~Ice();
        Ice(const Ice &other);
        Ice &operator=(const Ice &other);
        
        AMateria* clone() const;
        void use(ICharacter& target);
};