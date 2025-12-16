/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:57:45 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/15 16:45:36 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default AForm"), _gradeToSign(150), _gradeToExe(150)
{
    std::cout << "Default constructor of AForm called." << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExe) : _name(name), _gradeToSign(gradeToSign), _gradeToExe(gradeToExe)
{
    if (gradeToSign < 1 || gradeToExe < 1)
        throw GradeTooHighException();
    else if (gradeToExe > 150 || gradeToExe > 150)
        throw GradeTooLowException();
    _signed = false;
    std::cout << "Constructor of AForm called." << std::endl;
}

AForm::~AForm()
{
    std::cout << "Destructor of AForm called." << std::endl;
}

AForm::AForm(const AForm &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExe(other._gradeToExe)
{
    _signed = other._signed;
    std::cout << "Copy constructor of AForm called." << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
    std::cout << "Copy assignment constructor of AForm called.\n";
    if (this == &other)
        return *this;
    this->_signed = other._signed;
    return *this;
}

std::string AForm::getName() const
{
    return _name;
}

bool AForm::isSigned() const
{
    return _signed;
}

int AForm::getGradeToSign() const
{
    return _gradeToSign;
}

int AForm::getGradeToExe() const
{
    return _gradeToExe;
}

void AForm::beSigned(Bureaucrat &b)
{
    if (_signed == true)
        std::cout << "Already signed !" << std::endl;
    if (_gradeToSign >= b.getGrade())
    {
        _signed = true;
        std::cout << b.getName() << " signed " << this->getName() << "\n";
    }
    else 
    {
        std::cout << b.getName() << " couldn't sign " << this->getName() << " because ";
        throw AForm::GradeTooLowException();
    }
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return "Form is not signed";
}


