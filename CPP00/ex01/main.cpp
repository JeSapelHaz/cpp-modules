/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:23:26 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/03 15:30:59 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <stdlib.h>

int main(void)
{
    Phonebook phonebook;
    
    std::string line;
    
    while(1)
    {
        std::cout << "=========================================" << std::endl;
        std::cout << "ADD, SEARCH OR EXIT" << std::endl;
        if (!std::getline(std::cin, line)) 
        {   
            std::cout << "EOF detected. Exit program." << std::endl;
            exit(0);
        }
        if (line.compare("ADD") == 0)
        {
            phonebook.addContact();
            continue;
        }
        else if (line.compare("SEARCH") == 0)
        {
            phonebook.getContact();
            continue;
        }
        else if (line.compare("EXIT") == 0)
            return 0;
        else 
            std::cout << "INVALID COMMAND" << std::endl;

    }
}