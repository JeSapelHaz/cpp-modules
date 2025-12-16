/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:47:49 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/15 17:51:52 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string _target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm &other);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
};

