/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:42:36 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/18 00:36:29 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define NBR_ANIMALS 4

int main()
{
    Animal *animals[NBR_ANIMALS];
    for (int i = 0 ; i < NBR_ANIMALS; i++)
    {
        std::cout << i << " : ";
        if (i % 2 == 0)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }
    std::cout << "=========================================" << std::endl;
    animals[0]->getBrain()->setIdea("coucou les amis");
    animals[0]->getBrain()->getIdeas();
    Animal *Dog1 = new Dog();
    Dog1->getBrain()->setIdea("Dog 1 ici");
    Animal *Dog2 = Dog1;
    Dog2->getBrain()->getIdeas();
    animals[2]->getBrain()->getIdeas();
    std::cout << "=========================================" << std::endl;
    for (int i = 0; i < NBR_ANIMALS; i++)
    {
        std::cout << i << " : ";
        delete animals[i];
    }
    return 0;
    
    // Animal* animals[NBR_ANIMALS];

    // for (int i = 0; i < NBR_ANIMALS; i++)
    // {
    //     if (i < NBR_ANIMALS / 2)
    //         animals[i] = new Dog();
    //     else
    //         animals[i] = new Cat();
    // }

    // std::cout << "\n-- Ajout d'idées dans le cerveau des animaux --" << std::endl;

    // for (int i = 0; i < NBR_ANIMALS; i++)
    // {
    //     Brain* brain = animals[i]->getBrain();
    //     if (brain)
    //     {
    //         std::string idea1 = "Idea number 1 for animal ";
    //         idea1 += (char)('0' + i);
    //         std::string idea2 = "Idea number 2 for animal ";
    //         idea2 += (char)('0' + i);

    //         brain->setIdea(idea1);
    //         brain->setIdea(idea2);
    //     }
    // }
    // for (int i = 0; i < NBR_ANIMALS; i++)
    // {
    //     std::cout << "Animal " << i << " (" << animals[i]->getType() << ") ideas:" << std::endl;
    //     Brain* brain = animals[i]->getBrain();
    //     if (brain)
    //         brain->getIdeas();
    // }
    // std::cout << "\n-- Test de la copie profonde --" << std::endl;
    // Dog *dog1 = new Dog();
    // dog1->getBrain()->setIdea("Chasing cats");
    // dog1->getBrain()->setIdea("Playing fetch");

    // Dog *dog2 = dog1;

    // std::cout << "Dog1 ideas:" << std::endl;
    // dog1->getBrain()->getIdeas();

    // std::cout << "Dog2 ideas (copie):" << std::endl;
    // dog2->getBrain()->getIdeas();

    // dog1->getBrain()->setIdea("Eating bones");

    // std::cout << "Après modification dog1:" << std::endl;
    // std::cout << "Dog1 ideas:" << std::endl;
    // dog1->getBrain()->getIdeas();

    // std::cout << "Dog2 ideas (doit être inchangé):" << std::endl;
    // dog2->getBrain()->getIdeas();
    // delete dog1;

    // std::cout << "\n-- Suppression des animaux --" << std::endl;
    // for (int i = 0; i < NBR_ANIMALS; i++)
    //     delete animals[i];
    // return 0;
}