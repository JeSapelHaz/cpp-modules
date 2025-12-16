/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:30:30 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/16 17:56:55 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

static const std::string formNames[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

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
    AForm *form = NULL;
    int i = 0;
    while (i < 3 && (formNames[i].compare(nameForm) != 0))
        i++;
    switch (i)
	{
		case 0:
			form = new PresidentialPardonForm(targetForm);
			break;
		case 1:
			form = new RobotomyRequestForm(targetForm);
			break;
		case 2:
			form = new ShrubberyCreationForm(targetForm);
			break;
		default:
			throw InvalidFormNameException();
	}
    std::cout << "Intern creates " << nameForm << std::endl;
    return form;
}