/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:22:17 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/16 20:08:44 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
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
};

#endif