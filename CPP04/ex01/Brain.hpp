/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:33:46 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/16 20:35:09 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        ~Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);

        std::string getIdeas();
        setIdea(std::string idea);

        fillIdeas(const int nbr);
};

#endif