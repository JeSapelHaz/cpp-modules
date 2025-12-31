/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 14:12:05 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/31 14:34:14 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Data
{
    private:
        int _a;
        std::string _str;

    public:
        Data();
        ~Data();
        Data(const Data &other);
        Data &operator=(const Data &other);

        int getInt();
        std::string getString();
           
};