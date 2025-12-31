/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 14:29:21 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/31 14:33:16 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serialization.hpp"
#include <iostream>

int main(void)
{
    Data *data = new Data;
    uintptr_t raw;

    std::cout << data->getInt() << std::endl;
    std::cout << data << std::endl;
    std::cout << "=======================" << std::endl;

    raw = Serializer::serialize(data);

    std::cout << raw << std::endl;
    std::cout << "=======================" << std::endl;

    data = Serializer::deserialize(raw);

    std::cout << data->getInt() << std::endl;
    std::cout << data << std::endl;
    std::cout << "=======================" << std::endl;

    delete data;
    return 0;
}