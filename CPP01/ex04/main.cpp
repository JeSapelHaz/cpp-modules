/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:54:10 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/04 14:03:44 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

// npos = 18446744073709551615 c'est ce que retourne find si rien trouvé 
// OuTuCherches.find(CeQueTuCherches, DepuisOuTuCherches);
// CeQueTuVeuxModifier.append(CeQueTuVeuxAjouter, PosDebut, Longueur);
void replace_occurence(std::string s1, std::string s2, std::string line, std::ofstream &out)
{
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = line.find(s1, pos)) != std::string::npos)
    {
        result.append(line, pos, found - pos);
        result.append(s2);
        pos = found + s1.length();
    }
    result.append(line, pos, line.length() - pos);
    out << result;
}

int main(int ac, char **av)
{
    std::string name_file;
    std::string name_new_file;
    std::string s1;
    std::string s2;
    std::string line;
    
    if (ac == 4)
    {
        s1 = av[2];
        s2 = av[3];
        name_file = av[1];
        std::ifstream in(name_file.c_str());
        if (!in.is_open()) 
        {
            std::cerr << "Erreur : impossible d'ouvrir le fichier source." << std::endl;
            return 1;
        }
        name_new_file = name_file + ".replace";
        std::ofstream out(name_new_file.c_str());
        if (!out.is_open())
        {
            std::cerr << "Erreur : impossible d'ouvrir le fichier destination" << std::endl;
            return 1;
        }
        while(std::getline(in, line))
        {
            replace_occurence(s1, s2, line, out);
            out << '\n';
        }
    }
    else 
        std::cerr << "Usage: ./sed filename s1 s2" << std::endl;
}