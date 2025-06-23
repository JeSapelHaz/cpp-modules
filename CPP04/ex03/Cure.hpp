/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 14:42:30 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 16:53:15 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
    public :
        Cure();
        ~Cure();
        Cure(const Cure &other);
        Cure &operator=(const Cure &other);
        
        AMateria* clone() const;
        void use(ICharacter& target);
};