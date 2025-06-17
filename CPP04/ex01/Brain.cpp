/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:44:57 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/17 17:42:34 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "A Brain is created." << std::endl;
}

Brain::~Brain()
{
    std::cout << "A Brain is destroyed." << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Copy constructor of Brain called." << std::endl;
    for (int i = 0; i < _ideas->size() ; i++)
        _ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(const Brain &other)
{
    std::cout << "Copy assignment constructor of Brain called." << std::endl;
    for (int i = 0; i < _ideas->size() ; i++)
        _ideas[i] = other._ideas[i];
    return *this;
}

std::string Brain::getIdeas()
{
    for (int i = 0; i < _ideas->size() ; i++)
        std::cout << "Idea " << i + 1 << " is " << _ideas[i] << std::endl;
}

void Brain::setIdea(std::string idea)
{
    int l = _ideas->size();
    if (l > 99)
    {
        std::cout << "Cant add more ideas\n";
        return ;
    }
    _ideas[l] = idea;
}
