/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:33:46 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/18 14:57:20 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string _ideas[100];
        int _ideaCount;

    public:
        Brain();
        ~Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);

        void getIdeas() const;
        void setIdea(std::string idea);
};

#endif