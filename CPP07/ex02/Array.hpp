/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:50:14 by hbutt             #+#    #+#             */
/*   Updated: 2026/01/06 18:39:58 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <exception>

template<typename T>
class Array
{
    private :
        T* _elements;
        unsigned int _size;
    
    public :
        Array();
        Array(unsigned int n);
        ~Array();
        Array(const Array<T> &other);
        Array<T> &operator=(const Array<T> &other);
        
        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;
        unsigned int size() const;

        class OutOfArrayException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

template<typename T>
Array<T>::Array() : _elements(new T[0]), _size(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
    _elements = new T[n];
    for (unsigned int i = 0; i < n; i++)
        _elements[i] = 0;
}

template<typename T>
Array<T>::~Array()
{
    delete[] _elements;
}

template<typename T>
Array<T>::Array(const Array<T> &other) : _size(other._size)
{
    *this = other;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T> &other)
{
    if (this != &other)
    {
        delete[] _elements;
        _size = other._size;
        _elements = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _elements[i] = other._elements[i];
    }
    return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw Array::OutOfArrayException();
    return _elements[index];
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw Array::OutOfArrayException();
    return _elements[index];
}

template<typename T>
unsigned int Array<T>::size() const
{
    return _size;
}

template<class T>
const char* Array<T>::OutOfArrayException::what() const throw()
{
    return ("n is out of the array\n");
}