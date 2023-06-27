/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 12:31:47 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/27 14:22:07 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template < typename T>
void easyfind(T first, int second)
{
    typename T::iterator it = first.begin();
    typename T::iterator ite = first.end();
    int i = -1;
    while(it != ite)
    {
        int element = *it;
        ++i;
        if (element == second)
        {
            std::cout <<
            "Element " << 
            element <<
            " is in the container at index " <<
            i <<
            std::endl;
            return;
        }
        it++;
    }
    std::cout << "Element not found" << std::endl;
    return;
}

#endif