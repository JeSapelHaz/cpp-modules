/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:44:57 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 12:19:58 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    _ideaCount = 0;
    std::cout << "A Brain is created." << std::endl;
}

Brain::~Brain()
{
    std::cout << "A Brain is destroyed." << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Copy constructor of Brain called." << std::endl;
    _ideaCount = other._ideaCount;
    for (int i = 0; i < _ideaCount; i++)
        _ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(const Brain &other)
{
    std::cout << "Copy assignment constructor of Brain called." << std::endl;
    if (this != &other)
    {
        _ideaCount = other._ideaCount;
        for (int i = 0; i < _ideaCount; i++)
            _ideas[i] = other._ideas[i];
    }
    return *this;
}


void Brain::getIdeas() const
{
    for (int i = 0; i < _ideaCount ; i++)
        std::cout << "Idea " << i + 1 << " is " << _ideas[i] << std::endl;
}

void Brain::setIdea(std::string idea)
{
    if (_ideaCount > 99)
    {
        std::cout << "Cant add more ideas\n";
        return ;
    }
    _ideas[_ideaCount] = idea;
    _ideaCount++;
    std::cout << "A new idea is set.\n";

}
