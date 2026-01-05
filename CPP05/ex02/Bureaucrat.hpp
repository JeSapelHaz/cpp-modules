/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 14:21:05 by hbutt             #+#    #+#             */
/*   Updated: 2026/01/05 16:31:01 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>

class AForm;

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &other);

        std::string getName() const;
        int getGrade() const;
        void increment();
        void decrement();

        void signForm(AForm &f);

        class GradeTooHighException : public std::exception
        {
            const char *what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            const char *what() const throw();
        };

        void executeForm(AForm const & form) const;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &obj);