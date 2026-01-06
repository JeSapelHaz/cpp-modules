/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:07:43 by hbutt             #+#    #+#             */
/*   Updated: 2026/01/06 17:37:34 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    std::cout << "=== Test 1 ===" << std::endl;
    const int array[5] = {1, 2, 3, 4, 5};
    ::iter(array, 5, ::print_value<const int>);
    std::cout << "=== Test 2 ===" << std::endl;
    std::string str[3] = {"comment", "ca va", "les amis"};
    ::iter(str, 3, ::print_value<std::string>);
}