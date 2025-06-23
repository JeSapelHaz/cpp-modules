/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:33:39 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/16 17:13:59 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal &other);
        WrongAnimal &operator=(const WrongAnimal &other);

        std::string getType() const;
        void makeSound() const;
};

#endif