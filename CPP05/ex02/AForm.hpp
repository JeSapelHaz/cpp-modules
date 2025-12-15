/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:57:38 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/15 18:19:44 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class AForm
{
    private:
        const std::string _name;
        bool _signed;
        const int _gradeToSign;
        const int _gradeToExe;
        
    public:
        AForm();
        AForm(std::string name, int gradeToSign, int gradeToExe);
        virtual ~AForm() = 0;
        AForm(const AForm &other);
        AForm &operator=(const AForm &other);

        std::string getName() const;
        bool isSigned() const;
        int getGradeToSign() const;
        int getGradeToExe() const;

        void beSigned(Bureaucrat &b);

        class GradeTooHighException : public std::exception
        {
            const char *what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            const char *what() const throw();
        };
        
        class FormNotSignedException : public std::exception
	    {
		    virtual const char *what() const throw();
	    };

        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, AForm &obj);