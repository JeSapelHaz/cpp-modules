/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:22:30 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 14:07:44 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain* _brain;
        
    public:
        Cat();
        ~Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);

        std::string getType() const;
        void makeSound() const;

        Brain* getBrain() const;

};

#endif