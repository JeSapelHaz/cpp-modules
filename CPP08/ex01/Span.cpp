/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:49:25 by hbutt             #+#    #+#             */
/*   Updated: 2026/01/11 17:43:39 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <climits>



Span::Span(){}

Span::Span(int n) : _maxIntegers(n), _size(0) {}

Span::~Span() {}

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _maxIntegers = other._maxIntegers;
        _size = other._size;
    }
    return *this;
}

void Span::addNumber(unsigned int n)
{
    if (_size >= _maxIntegers)
        throw Span::maxIntegersException();
    _array.push_back(n);
    _size++;
}

unsigned int Span::shortestSpan()
{
    if (_size < 2)
        throw Span::emptyArrayException();
    std::vector<int> sorted = _array;
    std::sort(sorted.begin(), sorted.end());
    unsigned int minSpan = UINT_MAX;
    for (unsigned int i = 0; i < _size - 1; i++)
    {
        unsigned int span = sorted[i + 1] - sorted[i];
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}
unsigned int Span::longestSpan()
{
    if (_size < 2)
        throw Span::emptyArrayException();
    std::vector<int> sorted = _array;
    std::sort(sorted.begin(), sorted.end());
    return sorted.back() - sorted.front();
}

const char* Span::maxIntegersException::what() const throw()
{
    return "Cant add because already max integers in the array";
}
const char* Span::emptyArrayException::what() const throw()
{
    return "Cant add because maxIntegers < 2";
}