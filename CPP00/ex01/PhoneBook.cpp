/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:08:52 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/04 13:24:05 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <stdlib.h>

void PhoneBook::addContact(void)
{
    std::string array[5];
    
    std::cout << "Please enter a first name:" << std::endl;
    if (!std::getline(std::cin, array[0])) 
    {
        std::cout << "EOF detected. Contact creation aborted." << std::endl;
        exit(0);
    }
    if (array[0].empty())
    {
        std::cout << "Empty, please retry without empty entry" << std::endl;
        return;
    }
    
    std::cout << "Please enter a last name:" << std::endl;
    if (!std::getline(std::cin, array[1])) 
    {
        std::cout << "EOF detected. Contact creation aborted." << std::endl;
        exit(0);
    }
    if (array[1].empty())
    {
        std::cout << "Empty, please retry without empty entry" << std::endl;
        return;
    }
    
    std::cout << "Please enter a nickname:" << std::endl;
    if (!std::getline(std::cin, array[2])) 
    {
        std::cout << "EOF detected. Contact creation aborted." << std::endl;
        exit(0);
    }
    if (array[2].empty())
    {
        std::cout << "Empty, please retry without empty entry" << std::endl;
        return;
    }
    
    std::cout << "Please enter a phone number:" << std::endl;
    if (!std::getline(std::cin, array[3])) 
    {
        std::cout << "EOF detected. Contact creation aborted." << std::endl;
        exit(0);
    }
    if (array[3].empty())
    {
        std::cout << "Empty, please retry without empty entry" << std::endl;
        return;
    }
    
    std::cout << "Please enter a secret:" << std::endl;
    if (!std::getline(std::cin, array[4])) 
    {
        std::cout << "EOF detected. Contact creation aborted." << std::endl;
        exit(0);
    }
    if (array[4].empty())
    {
        std::cout << "Empty, please retry without empty entry" << std::endl;
        return;
    }
    this->_contacts[_nbrContacts % 8].setFirstname(array[0]);
    this->_contacts[_nbrContacts % 8].setLastname(array[1]);
    this->_contacts[_nbrContacts % 8].setNickname(array[2]);
    this->_contacts[_nbrContacts % 8].setPhonenumber(array[3]);
    this->_contacts[_nbrContacts % 8].setSecret(array[4]);
    this->_nbrContacts++;
}
void PhoneBook::getContact(void)
{
    int i = 0;
    std::string line;
    std::string str_cut;
    int index;
    
    if (this->_nbrContacts < 1)
    {
        std::cout << "No contact." << std::endl;
        return;
    }
    std::cout << "| INDEX    |FIRST NAME|LAST NAME | NICKNAME |" << std::endl;
    while(i < this->_nbrContacts && i < 8)
    {
        std::cout << "|";
        std::cout << std::right << std::setw(10) << i + 1;
        std::cout << "|";
        if (this->_contacts[i].getFirstname().size() > 10)
        {
            str_cut = this->_contacts[i].getFirstname().substr(0 ,10);
            str_cut[9] = '.';
            std::cout << std::setw(10) << str_cut;
        }
        else
            std::cout << std::right << std::setw(10) << this->_contacts[i].getFirstname();
        std::cout << "|";
        if (this->_contacts[i].getLastname().size() > 10)
        {
            str_cut = this->_contacts[i].getLastname().substr(0 ,10);
            str_cut[9] = '.';
            std::cout << std::setw(10) << str_cut;
        }
        else
            std::cout << std::right << std::setw(10) << this->_contacts[i].getLastname();
        std::cout << "|";
        if (this->_contacts[i].getNickname().size() > 10)
        {
            str_cut = this->_contacts[i].getNickname().substr(0 ,10);
            str_cut[9] = '.';
            std::cout << std::setw(10) << str_cut;
        }
        else
        std::cout << std::right << std::setw(10) << this->_contacts[i].getNickname();
        std::cout << "|" << std::endl;
        i++;
    }
    std::cout << "Enter the index of the contact you want" << std::endl;
    std::getline(std::cin, line);
    if (line.size() > 1)
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }
    index = atoi(line.c_str());
    if (index > 0 && index <= this->_nbrContacts)
    {
        std::cout << "First name : " << this->_contacts[index - 1].getFirstname() << std::endl;
        std::cout << "Last name : " << this->_contacts[index - 1].getLastname() << std::endl;
        std::cout << "Nickname : " << this->_contacts[index - 1].getNickname() << std::endl;
        std::cout << "Phone number : " << this->_contacts[index - 1].getPhonenumber() << std::endl;
        std::cout << "Secret : " << this->_contacts[index - 1].getSecret() << std::endl;
    }
    else 
        std::cout << "Invalid index" << std::endl;
}

int PhoneBook::getNbrContacts(void)
{
    return this->_nbrContacts;
}