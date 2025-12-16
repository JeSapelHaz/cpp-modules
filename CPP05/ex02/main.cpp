/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 14:20:25 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/15 16:55:27 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat Hulk("Hulk", 1);
    Bureaucrat IronMan("IronMan", 150);
    ShrubberyCreationForm shrubbery("shrubbery");
    RobotomyRequestForm robotomized("robotomized");
    PresidentialPardonForm presidential("presidential");
    std::cout << "------------------------------------\n";
    // try
    // {
    //     AForm f2("form2", 0, 150);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // std::cout << "------------------------------------\n";
    try
    {
        Hulk.executeForm(presidential);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "------------------------------------\n";
    try
    {
        presidential.beSigned(IronMan);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "------------------------------------\n";
    try
    {
        presidential.beSigned(Hulk);
        Hulk.executeForm(presidential);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "------------------------------------\n";
    try
    {
        IronMan.executeForm(presidential);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "------------------------------------\n";
}