/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 14:20:25 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/16 17:54:39 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern intern1;
    Intern someRandomIntern;
    AForm* rrf;
    try
    {
        intern1.makeForm("PresidentialPardonForm", "pdf1");
        intern1.makeForm("ShrubberyCreationForm", "scf1");
        intern1.makeForm("RobotomyRequestForm", "rrf1");
        intern1.makeForm("ddd", "ddd");
        rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
        (void) rrf;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    
}