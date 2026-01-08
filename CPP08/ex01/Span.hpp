/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:41:00 by hbutt             #+#    #+#             */
/*   Updated: 2026/01/08 17:57:26 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

class Span
{
    private:
        unsigned int _maxIntegers;
        unsigned int _size;
                
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
}