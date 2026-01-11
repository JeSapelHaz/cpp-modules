/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:41:00 by hbutt             #+#    #+#             */
/*   Updated: 2026/01/11 17:42:40 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <vector>
#include <exception>

class Span
{
    private:
        unsigned int _maxIntegers;
        unsigned int _size;
        std::vector<int> _array;
                
    public:
        Span();
        Span(int n);
        ~Span();
        Span(const Span &other);
        Span &operator=(const Span &other);

        void addNumber(unsigned int n);
        unsigned int shortestSpan();
        unsigned int longestSpan();
    
        class maxIntegersException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        
        class emptyArrayException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};