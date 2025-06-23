/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:33:39 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 14:03:39 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string _type;
    
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);

        std::string getType() const;
        virtual void makeSound() const;
};

#endif