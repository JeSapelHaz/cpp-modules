/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:57:38 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/15 16:39:21 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string _name;
        bool _signed;
        const int _gradeToSign;
        const int _gradeToExe;
        
    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExe);
        ~Form();
        Form(const Form &other);
        Form &operator=(const Form &other);

        std::string getName();
        bool isSigned();
        int getGradeToSign();
        int getGradeToExe();

        void beSigned(Bureaucrat &b);

        class GradeTooHighException : public std::exception
        {
            const char *what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, Form &obj);