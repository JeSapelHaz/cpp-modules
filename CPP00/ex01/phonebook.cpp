/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:08:52 by hbutt             #+#    #+#             */
/*   Updated: 2025/02/19 17:58:51 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Phonebook::addContact(void)
{
    // Contact newContact;
    // this->_contacts[_nbrContacts] = newContact;
    std::string array[5];
    std::cout << "Please enter a first name:" << std::endl;
    std::getline(std::cin, array[0]);
    std::cout << "Please enter a last name:" << std::endl;
    std::getline(std::cin, array[1]);
    std::cout << "Please enter a nickname:" << std::endl;
    std::getline(std::cin, array[2]);
    std::cout << "Please enter a phone number:" << std::endl;
    std::getline(std::cin, array[3]);
    std::cout << "Please enter a secret:" << std::endl;
    std::getline(std::cin, array[4]);
    this->_contacts[_nbrContacts % 8].setFirstname(array[0]);
    this->_contacts[_nbrContacts % 8].setLastname(array[1]);
    this->_contacts[_nbrContacts % 8].setNickname(array[2]);
    this->_contacts[_nbrContacts % 8].setPhonenumber(array[3]);
    this->_contacts[_nbrContacts % 8].setSecret(array[4]);
    this->_nbrContacts++;
}
void Phonebook::getContact(void)
{
    ;
}

int Phonebook::getNbrContacts(void)
{
    return this->_nbrContacts;
}