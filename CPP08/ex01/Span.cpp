/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:49:25 by hbutt             #+#    #+#             */
/*   Updated: 2026/01/08 17:56:36 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"



Span::Span(){}

Span::Span(int n) : _maxIntegers(n), _size(0);

~Span::Span();

Span(const Span &other)
{
    *this = other;
};

Span &operator=(const Span &other)
{
    if (this != &other)
    {
        _maxIntegers = other._maxIntegers;
        _size = other._size;
    }
    return *this;
}

void addNumber(unsigned int n);
{
    
}

unsigned int shortestSpan();
unsigned int longestSpan();