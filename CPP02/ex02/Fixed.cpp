/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:48:52 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/10 17:44:14 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const int a)
{
    // std::cout << "Int constructor called" << std::endl;
    this->_value = a << this->_nbrBits;
    
}
Fixed::Fixed(const float a)
{
    // std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(a * (1 << _nbrBits));
}

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed& other)
{
    // std::cout << "Copy assignment Fixed::operator called" << std::endl;
    if (this != &other)
		this->_value = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}
float Fixed::toFloat(void) const
{
    return ((float)this->_value / (float)(1 << _nbrBits));
}

int Fixed::toInt(void) const
{
    return ((int)this->_value >> _nbrBits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &obj)
{
	out << obj.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed &other) const
{
    if (this->toFloat() > other.toFloat())
        return true;
    return false;
}

bool Fixed::operator<(const Fixed &other) const
{
    if (this->toFloat() < other.toFloat())
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed &other) const
{
    if (this->toFloat() >= other.toFloat())
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed &other) const
{
    if (this->toFloat() <= other.toFloat())
        return true;
    return false;
}

bool Fixed::operator==(const Fixed &other) const
{
    if (this->toFloat() == other.toFloat())
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed &other) const
{
    if (this->toFloat() != other.toFloat())
        return true;
    return false;
}

Fixed Fixed::operator+(const Fixed &other) const
{
    return this->toFloat() + other.toFloat();
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return this->toFloat() - other.toFloat();
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return this->toFloat() * other.toFloat();
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return this->toFloat() / other.toFloat();
}

Fixed &Fixed::operator++()
{
    this->_value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed	tmp;

	tmp = *this;
	operator++();
	return (tmp);
}

Fixed &Fixed::operator--()
{
    this->_value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed	tmp;

	tmp = *this;
	operator--();
	return (tmp);
}

Fixed& Fixed::min(Fixed &Fixed1, Fixed &Fixed2)
{
    if (Fixed1 < Fixed2)
        return Fixed1;
    return Fixed2;
}
const Fixed& Fixed::min(const Fixed &Fixed1, const Fixed &Fixed2)
{
    if (Fixed1 < Fixed2)
        return Fixed1;
    return Fixed2;
}

Fixed& Fixed::max(Fixed &Fixed1, Fixed &Fixed2)
{
    if (Fixed1 > Fixed2)
        return Fixed1;
    return Fixed2;
}

const Fixed& Fixed::max(const Fixed &Fixed1, const Fixed &Fixed2)
{
    if (Fixed1 > Fixed2)
        return Fixed1;
    return Fixed2;
}