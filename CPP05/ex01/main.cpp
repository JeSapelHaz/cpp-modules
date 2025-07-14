/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 14:20:25 by hbutt             #+#    #+#             */
/*   Updated: 2025/07/09 16:01:01 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat Hulk("Hulk", 1);
    Bureaucrat IronMan("IronMan", 150);
    std::cout << "------------------------------------\n";
    try
    {
        Bureaucrat("CaptainAmerica", 0);
    }
    catch(const std::exception& e)
    {
        std::cout << "Cannot create CaptainAmerica\n";
        std::cout << e.what() << '\n';
    }
    std::cout << "------------------------------------\n";
    std::cout << Hulk << std::endl;
    std::cout << IronMan << std::endl;
    std::cout << "------------------------------------\n";
    try
    {
        Hulk.increment();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    std::cout << "------------------------------------\n";
    try
    {
        IronMan.decrement(); 
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    std::cout << "------------------------------------\n";
}