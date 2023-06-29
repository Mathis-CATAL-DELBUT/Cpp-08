/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:07:40 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/29 11:45:35 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <list>

// int main()
// {
//     std::vector<int> v;
//     v.push_back(5);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     try
//     {
    //     {
    //         // Span sp = Span(100);
    //         // for (int i = 0; i <= 300; i+=3)
    //         //     sp.addNumber(i);
    //         // std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
    //         // std::cout << "longest span : " << sp.longestSpan() << std::endl;
    //     }
//         {
//             int start_add = 0;
//             Span sp2 = Span(25);
//             sp2.addNumbers(v, start_add);
//         }
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }

// {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};




int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}