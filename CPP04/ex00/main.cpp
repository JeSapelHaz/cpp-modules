/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:42:36 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/16 17:40:39 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound();
    // j->makeSound();
    // meta->makeSound();

    std::cout << "=========================================" << std::endl;
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "=========================================" << std::endl;
    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;
    std::cout << "Animal type: " << meta->getType() << std::endl;

    std::cout << "=========================================" << std::endl;
    cat->makeSound();
    dog->makeSound();
    meta->makeSound();

    std::cout << "=========================================" << std::endl;
    delete meta;
    delete dog;
    delete cat;

    std::cout << "=========================================" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "=========================================" << std::endl;
    std::cout << "WrongCat type: " << wrongCat->getType() << std::endl;
    std::cout << "WrongAnimal type: " << wrongMeta->getType() << std::endl;

    std::cout << "=========================================" << std::endl;
    wrongCat->makeSound();
    wrongMeta->makeSound();

    std::cout << "=========================================" << std::endl;
    delete wrongMeta;
    delete wrongCat;

    std::cout << "=========================================" << std::endl;
    Dog d;
    Cat c;
    WrongCat wc;

    std::cout << "=========================================" << std::endl;
    d.makeSound();
    c.makeSound();
    wc.makeSound();

    std::cout << "=========================================" << std::endl;
    return 0;
}