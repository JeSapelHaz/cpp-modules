/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:47:56 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/15 17:51:51 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string _target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm &other);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
};
