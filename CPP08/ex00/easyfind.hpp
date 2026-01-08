/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:46:38 by hbutt             #+#    #+#             */
/*   Updated: 2026/01/08 17:22:14 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <algorithm>
#include <exception>

class NotInContainerValueException : public std::exception
{
    public:
        const char *what() const throw()
        {
            return "The value is not in the container";
        }
};

template<typename T>
int easyfind(T &c, int n)
{
    typename T::iterator it;
    it = std::find(c.begin(), c.end(), n);
    
    if (it == c.end())
        throw NotInContainerValueException();

    return *it;
}