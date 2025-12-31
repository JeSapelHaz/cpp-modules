/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 14:53:12 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/31 15:01:12 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base* generate(void)
{
    int random = rand() % 3;
    
    if (random == 0)
    {
        std::cout << "Generated: A" << std::endl;
        return new A();
    }
    else if (random == 1)
    {
        std::cout << "Generated: B" << std::endl;
        return new B();
    }
    else
    {
        std::cout << "Generated: C" << std::endl;
        return new C();
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch (std::exception&) {}
    
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch (std::exception&) {}
    
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch (std::exception&) {}
    
    std::cout << "Unknown type" << std::endl;
}

int main(void)
{
    srand(time(NULL));
    
    std::cout << "=== Test 1 ===" << std::endl;
    Base* obj1 = generate();
    std::cout << "Identify by pointer: ";
    identify(obj1);
    std::cout << "Identify by reference: ";
    identify(*obj1);
    delete obj1;
    
    std::cout << "\n=== Test 2 ===" << std::endl;
    Base* obj2 = generate();
    std::cout << "Identify by pointer: ";
    identify(obj2);
    std::cout << "Identify by reference: ";
    identify(*obj2);
    delete obj2;
    
    std::cout << "\n=== Test 3 ===" << std::endl;
    Base* obj3 = generate();
    std::cout << "Identify by pointer: ";
    identify(obj3);
    std::cout << "Identify by reference: ";
    identify(*obj3);
    delete obj3;
    
    return 0;
}