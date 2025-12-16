/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:47:52 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/15 17:47:53 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default")
{
    std::cout << "Default constructor of RobotomyRequestForm called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 145, 137), _target(target)
{
    std::cout << "Constructor of RobotomyRequestForm for target called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor of RobotomyRequestForm called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other) : AForm("RobotomyRequestForm", 145, 137), _target(other.getTarget())
{
    *this = other;
    std::cout << "Copy constructor of AForm called." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    std::cout << "Copy assignment constructor of RobotomyRequestForm called.\n";
    if (this == &other)
        return *this;
    return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
    return _target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
    std::cout << "AHOUUUUUUUUUUUUUUUUUUUUUUUUU \n";
    std::srand(std::time(NULL));
    int random = std::rand() % 2 + 1;
    if (random == 1)
        std::cout << this->getTarget() << " has been robotomized successfully\n";
    else 
        std::cout << this->getTarget() << " hasn't been robotomized successfully\n";
}