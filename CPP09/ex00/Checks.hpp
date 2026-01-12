/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Checks.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 21:00:21 by hbutt             #+#    #+#             */
/*   Updated: 2026/01/12 21:26:08 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

class FewArgumentsException : public std::exception
{
public:
    const char *what() const throw()
    {
        return "error : too few arguments";
    }
};

class TooManyArgumentsException : public std::exception
{
public:
    const char *what() const throw()
    {
        return "error : too many arguments";
    }
};

class IncorrectFileType : public std::exception
{
public:
    const char *what() const throw()
    {
        return "error : incorrect file type";
    }
};

class EmptyFileException : public std::exception
{
public:
    const char *what() const throw()
    {
        return "error : empty file";
    }
};
class NotValidLineException : public std::exception
{
public:
    const char *what() const throw()
    {
        return "error : invalid line";
    }
};


