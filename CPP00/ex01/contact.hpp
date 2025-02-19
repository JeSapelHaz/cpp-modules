/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:18:28 by hbutt             #+#    #+#             */
/*   Updated: 2025/02/18 16:27:22 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

class Contact{

private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string secret;

public:
    Contact(void);
    ~Contact(void);

    void set_firstname(std::string firstname);
    void set_lastname(std::string lastname);
    void set_nickname(std::string nickname);
    void set_phonenumber(std::string phonenumber);
    void set_secret(std::string secret);

    std::string get_firstname() const;
    std::string get_lastname() const;
    std::string get_nickname() const;
    std::string get_phonenumber() const;
    std::string get_secret() const;
};
