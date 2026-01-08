/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:46:23 by hbutt             #+#    #+#             */
/*   Updated: 2026/01/08 17:38:15 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <string>
#include <list>

int main()
{
    std::vector<int> arrayInt;
    arrayInt.push_back(55);
    arrayInt.push_back(2);
    arrayInt.push_back(33);
    arrayInt.push_back(9);
    arrayInt.push_back(166);
    arrayInt.push_back(45);
    arrayInt.push_back(4);
    std::cout << easyfind(arrayInt, 45) << std::endl;
    std::list<int> listInt;
    listInt.push_back(44);
    listInt.push_back(45);
    listInt.push_back(46);
    listInt.push_back(47);
    std::cout << easyfind(listInt, 46) << std::endl;
    try 
    {
        std::cout <<easyfind(listInt, 48) << std::endl;
        
    }
    catch (NotInContainerValueException &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}