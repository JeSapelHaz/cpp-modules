/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:22:17 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 14:08:02 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain* _brain;
        
    public:
        Dog();
        ~Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);

        std::string getType() const;
        void makeSound() const;

        Brain* getBrain() const;
};

#endif