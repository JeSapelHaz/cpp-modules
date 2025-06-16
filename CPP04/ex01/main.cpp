/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:42:36 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/16 18:43:42 by hbutt            ###   ########.fr       */
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
    Animal *animals[20];
    for (int i = 0 ; i <= 20; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }
    std::cout << "=========================================" << std::endl;
    for (int i = 0 ; i <= 20; i++)
        delete animals[i];
    return 0;
}