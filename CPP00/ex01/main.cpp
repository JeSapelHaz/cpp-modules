/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:23:26 by hbutt             #+#    #+#             */
/*   Updated: 2025/02/19 18:00:56 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

int main(void)
{
    Phonebook phonebook;
    
    std::string line;
    
    while(1)
    {
        std::cout << "ADD, SEARCH OR EXIT" << std::endl;
        std::getline(std::cin, line);
        if (line.compare("ADD") == 0)
        {
            phonebook.addContact();
            std::cout << std::setw(10) << "First name du contact :";
            std::cout << phonebook.getNbrContacts();
            std::cout << phonebook._contacts[phonebook.getNbrContacts()-1].getFirstname() << std:: endl;
            continue;
        }
        else if (line.compare("SEARCH") == 0)
        {
            phonebook.getContact();
            continue;
        }
        else if (line.compare("EXIT") == 0)
        {
            return 0;
        }
        else 
        {
            std::cout << "INVALID COMMAND" << std::endl;
        }
        
    }
}