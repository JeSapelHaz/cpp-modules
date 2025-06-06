/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:19:14 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/03 15:30:51 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstname(std::string firstname)
{
    this->_firstname = firstname;
}
void Contact::setLastname(std::string lastname)
{
    this->_lastname = lastname;
}
void Contact::setNickname(std::string nickname)
{
    this->_nickname = nickname;
}
void Contact::setPhonenumber(std::string phonenumber)
{
    this->_phonenumber = phonenumber;
}
void Contact::setSecret(std::string secret)
{
    this->_secret = secret;
}

std::string Contact::getFirstname() const
{
    return this->_firstname;
}

std::string Contact::getLastname() const
{
    return this->_lastname;
}

std::string Contact::getNickname() const
{
    return this->_nickname;
}

std::string Contact::getPhonenumber() const
{
    return this->_phonenumber;
}

std::string Contact::getSecret() const
{
    return this->_secret;
}