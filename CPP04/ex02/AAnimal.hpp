/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:33:39 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 14:06:43 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
    protected:
        std::string _type;
    
    public:
        AAnimal();
        virtual ~AAnimal();
        AAnimal(const AAnimal &other);
        AAnimal &operator=(const AAnimal &other);

        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif