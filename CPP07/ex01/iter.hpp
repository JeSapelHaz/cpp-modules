/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 17:57:00 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/31 18:11:06 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void print_value(T a)
{
    std::cout << a << std::endl;
}

template <typename T, typename F>
void iter(T *arrayPtr, const size_t length, F c)
{
    for (size_t i = 0; i < length ; i++)
        c(arrayPtr[i]);
}
