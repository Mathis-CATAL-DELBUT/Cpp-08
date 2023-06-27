/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:36:03 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/27 14:16:39 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
    std::cout << "vector: " << std::endl;
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    easyfind(v, 2);
    easyfind(v, 4);
    
    std::cout << "---------------------" << std::endl; // Just to separate the outputs
    std::cout << "list: " << std::endl;
    
    std::list<int> l;
    l.push_back(4);
    l.push_back(3);
    l.push_back(2);
    l.push_back(1); 

    easyfind(l, 2);
    easyfind(l, 4);
    return 0;
}