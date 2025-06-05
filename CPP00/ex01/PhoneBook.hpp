/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:18:36 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/05 15:03:24 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{

private:
    
    int     _nbrContacts;
    Contact _contacts[8];

public:
    PhoneBook() : _nbrContacts(0) {}
    int getNbrContacts(void);
    void addContact(void);
    void getContact(void);
};

#endif