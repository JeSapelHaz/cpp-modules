/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:00:12 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/16 12:50:51 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Fixed.hpp"

int main( void ) {
    
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;
    
    // std::cout << Fixed::max( a, b ) << std::endl;

    // Fixed a;
    // Fixed const b(Fixed(5.05f) * Fixed(2));

    // std::cout << "a: " << a << std::endl;
    // std::cout << "b: " << b << std::endl;

    // std::cout << "++a: " << ++a << std::endl;
    // std::cout << "a: " << a << std::endl;
    // std::cout << "a++: " << a++ << std::endl;
    // std::cout << "a: " << a << std::endl;

    // std::cout << "b: " << b << std::endl;

    // std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
    // std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;

    // Fixed c(10);
    // Fixed d(3.5f);

    // std::cout << "c: " << c << std::endl;
    // std::cout << "d: " << d << std::endl;

    // std::cout << "c + d: " << c + d << std::endl;
    // std::cout << "c - d: " << c - d << std::endl;
    // std::cout << "c * d: " << c * d << std::endl;
    // std::cout << "c / d: " << c / d << std::endl;

    // std::cout << "c > d: " << (c > d) << std::endl;
    // std::cout << "c < d: " << (c < d) << std::endl;
    // std::cout << "c >= d: " << (c >= d) << std::endl;
    // std::cout << "c <= d: " << (c <= d) << std::endl;
    // std::cout << "c == d: " << (c == d) << std::endl;
    // std::cout << "c != d: " << (c != d) << std::endl;

    return 0;
}