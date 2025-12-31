/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 17:27:23 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/31 17:40:53 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
T min(T a, T b)
{
    if (a < b)
        return a;
    return b;
};

template <typename T>
T max(T a, T b)
{
    if (a > b)
        return a;
    return b; 
};

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
    return;
};