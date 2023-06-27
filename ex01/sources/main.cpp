/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:07:40 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/27 16:57:23 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {   
        Span sp = Span(100);
        for (int i = 0; i <= 300; i+=3)
            sp.addNumber(i);
            
        std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
        std::cout << "longest span : " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}