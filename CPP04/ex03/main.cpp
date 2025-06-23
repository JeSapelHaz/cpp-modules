/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 14:18:02 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 17:17:17 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    std::cout << "=========================================" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::cout << "=========================================" << std::endl;
    ICharacter* me = new Character("me");

    std::cout << "=========================================" << std::endl;
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    std::cout << "=========================================" << std::endl;
    ICharacter* bob = new Character("bob");

    std::cout << "=========================================" << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << "=========================================" << std::endl;
    delete bob;
    delete me;
    delete src;

    return 0;
}
