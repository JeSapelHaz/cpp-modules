/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 14:20:25 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/15 16:52:09 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat Hulk("Hulk", 1);
    Bureaucrat IronMan("IronMan", 150);
    Form f1("form1", 1, 1);
    std::cout << "------------------------------------\n";
    try
    {
        Form f2("form2", 0, 150);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "------------------------------------\n";
    try
    {
        f1.beSigned(IronMan);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "------------------------------------\n";
    try
    {
        f1.beSigned(Hulk);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}