/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:53:20 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/03 17:06:11 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "The memory address of the string variable is :" << &string << std::endl;
    std::cout << "The memory address held by stringPTR is : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF is : " << &stringREF << std::endl;

    std::cout << "The value of the string variable is : " << string << std::endl;
    std::cout << "The value pointed to by stringPTR is : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF is : " << stringREF << std::endl;

    return 0;
}