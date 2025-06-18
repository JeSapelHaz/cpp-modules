/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:42:36 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/18 16:16:08 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define NBR_ANIMALS 4

int main()
{
    Animal* animals[NBR_ANIMALS];
    for (int i = 0; i < NBR_ANIMALS; i++)
    {
        if (i < NBR_ANIMALS / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    Dog* dog1 = new Dog();
    dog1->getBrain()->setIdea("Idea A");
    dog1->getBrain()->setIdea("Idea B");

    Dog* dog2 = new Dog(*dog1);

    dog1->getBrain()->setIdea("Idea C");

    std::cout << "Dog1 ideas:" << std::endl;
    dog1->getBrain()->getIdeas();

    std::cout << "Dog2 ideas (doit être inchangé):" << std::endl;
    dog2->getBrain()->getIdeas();

    delete dog1;
    delete dog2;

    for (int i = 0; i < NBR_ANIMALS; i++)
        delete animals[i];

    return 0;
}

