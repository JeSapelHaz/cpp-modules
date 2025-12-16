/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:30:30 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/16 16:40:57 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

const char *Intern::InvalidFormNameException::what() const throw()
{
    return ("Invalid form name!");
}

AForm *Intern::makeForm(std::string nameForm, std::string targetForm)
{
    AForm *form;
    if (nameForm.compare("PresidentialPardonForm") == 0)
        form = new PresidentialPardonForm(targetForm);
    else if (nameForm.compare("RobotomyRequestForm") == 0)
        form = new RobotomyRequestForm(targetForm);
    else if (nameForm.compare("ShrubberyCreationForm") == 0)
        form = new ShrubberyCreationForm(targetForm);
    else 
        throw InvalidNameException();
    return form;
}