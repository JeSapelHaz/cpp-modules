/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:42:36 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 14:11:24 by hbutt            ###   ########.fr       */
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
    // Animal *animal1 = new Animal();
    // animal1->makeSound();
    Animal* animals[NBR_ANIMALS];
    for (int i = 0; i < NBR_ANIMALS; i++)
    {
        if (i < NBR_ANIMALS / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    std::cout << "=========================================" << std::endl;
    Dog* dog1 = new Dog();
    dog1->getBrain()->setIdea("Idea A");
    dog1->getBrain()->setIdea("Idea B");
    std::cout << "=========================================" << std::endl;
    Dog* dog2 = new Dog(*dog1);
    std::cout << "Dog1 ideas:" << std::endl;
    dog1->getBrain()->getIdeas();
    std::cout << "Dog2 ideas:" << std::endl;
    dog2->getBrain()->getIdeas();
    dog1->getBrain()->setIdea("Idea C");
    std::cout << "=========================================" << std::endl;
    std::cout << "Dog1 ideas:" << std::endl;
    dog1->getBrain()->getIdeas();
    std::cout << "=========================================" << std::endl;
    std::cout << "Dog2 ideas (doit être inchangé):" << std::endl;
    dog2->getBrain()->getIdeas();
    std::cout << "=========================================" << std::endl;
    delete dog1;
    delete dog2;
    std::cout << "=========================================" << std::endl;

    for (int i = 0; i < NBR_ANIMALS; i++)
        delete animals[i];

    return 0;
}

