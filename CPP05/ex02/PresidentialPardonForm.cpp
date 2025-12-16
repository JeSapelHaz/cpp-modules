/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:47:46 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/15 17:47:47 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default")
{
    std::cout << "Default constructor of PresidentialPardonForm called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 145, 137), _target(target)
{
    std::cout << "Constructor of PresidentialPardonForm for target called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor of PresidentialPardonForm called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other) : AForm("PresidentialPardonForm", 145, 137), _target(other.getTarget())
{
    *this = other;
    std::cout << "Copy constructor of AForm called." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    std::cout << "Copy assignment constructor of PresidentialPardonForm called.\n";
    if (this == &other)
        return *this;
    return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
    return _target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->isSigned()) 
    {
        std::cout << executor.getName() << " couldn't execute " << this->getName() << " because ";
        throw AForm::FormNotSignedException();
    }
    if (executor.getGrade() > this->getGradeToExe()) 
    {   
        std::cout << executor.getName() << " couldn't execute " << this->getName() << " because ";
        throw AForm::GradeTooLowException();
    }
    std::cout << this->getName() << "has been pardoned by Zaphod Beeblebrox\n";
}
