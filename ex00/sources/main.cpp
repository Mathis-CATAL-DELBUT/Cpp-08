/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:36:03 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/27 16:05:31 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <array>
#include <deque>
#include <forward_list>


int main()
{
    std::cout << "vector: " << std::endl;
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    easyfind(v, 2);
    easyfind(v, 4);
    
    std::cout << "---------------------" << std::endl;
    std::cout << "list: " << std::endl;
    
    std::list<int> l;
    l.push_back(4);
    l.push_back(3);
    l.push_back(2);
    l.push_back(1); 

    easyfind(l, 2);
    easyfind(l, 4);
    
    std::cout << "----------------------" << std::endl;
    std::cout << "array: " << std::endl;
    
    std::array<int, 3> a = {1, 2, 3};

    easyfind(a, 2);
    easyfind(a, 4);
    
    std::cout << "----------------------" << std::endl;
    std::cout << "deque" << std::endl;

    std::deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);

    easyfind(d, 2);
    easyfind(d, 4);
    
    std::cout << "----------------------" << std::endl;
    std::cout << "forward_list" << std::endl;
    
    std::forward_list<int> f;
    f.push_front(1);
    f.push_front(2);
    f.push_front(3);

    easyfind(f, 2);
    easyfind(d, 4);

    
    return 0;
}