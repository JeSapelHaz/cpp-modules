/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:44:57 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/16 20:40:25 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain();
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
    for (int i = 0; i < _ideas.size() ; i++)
        _ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(const Brain &other)
{
    
}

std::string Brain::getIdeas()
{

}

Brain::setIdea(std::string idea)
{

}

Brain::fillIdeas(const int nbr)
{
    
}