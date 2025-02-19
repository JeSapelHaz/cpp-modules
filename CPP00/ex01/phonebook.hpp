/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:18:36 by hbutt             #+#    #+#             */
/*   Updated: 2025/02/19 18:05:02 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "contact.hpp"

class Phonebook
{

private:
    
    int     _nbrContacts;

public:
    Contact _contacts[8];
    Phonebook() : _nbrContacts(0) {}
    int getNbrContacts(void);
    void addContact(void);
    void getContact(void);
};

#endif