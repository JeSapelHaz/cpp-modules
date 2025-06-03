/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:18:28 by hbutt             #+#    #+#             */
/*   Updated: 2025/02/19 17:40:53 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{

private:
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _secret;

public:
    Contact(void) {}
    ~Contact(void) {}

    void setFirstname(std::string firstname);
    void setLastname(std::string lastname);
    void setNickname(std::string nickname);
    void setPhonenumber(std::string phonenumber);
    void setSecret(std::string secret);

    std::string getFirstname() const;
    std::string getLastname() const;
    std::string getNickname() const;
    std::string getPhonenumber() const;
    std::string getSecret() const;
};

#endif