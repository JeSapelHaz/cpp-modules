/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:57:45 by hbutt             #+#    #+#             */
/*   Updated: 2025/07/16 21:09:38 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default Form"), _gradeToSign(150), _gradeToExe(150)
{
    std::cout << "Default constructor of Form called." << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExe) : _name(name), _gradeToSign(gradeToSign), _gradeToExe(gradeToExe)
{
    if (gradeToSign < 1 || gradeToExe < 1)
        throw GradeTooHighException();
    else if (grade > 150 || gradeToExe > 150)
        throw GradeTooLowException();
    _signed = false;
    std::cout << "Constructor of Form called." << std::endl;
}

Form::~Form()
{
    std::cout << "Destructor of Form called." << std::endl;
}

Form::Form(const Form &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExe(other._gradeToExe)
{
    _signed = other._signed;
    std::cout << "Copy constructor of Form called." << std::endl;
}

Form &Form::operator=(const Form &other)
{
    std::cout << "Copy assignment constructor of Form called.\n";
    if (this == &other)
        return *this;
    this->_signed = other._signed;
    return *this;
}

std::string Form::getName()
{
    return _name;
}

bool Form::isSigned()
{
    return _signed;
}

int Form::getGradeToSign()
{
    return _gradeToSign;
}

int Form::getGradeToExe()
{
    return _gradeToExe;
}

void Form::beSigned(Bureaucrat &b)
{
    if (b->_signed == true)
        std::cout << "Already signed !" << std::endl;
    if (_gradeToSign > b->_grade)
        b->_signed = true;
    else 
        throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("The grade is too high !");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("The grade is too low !");
}


