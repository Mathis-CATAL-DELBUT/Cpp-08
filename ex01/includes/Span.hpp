/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:32:08 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/29 11:49:21 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class OutOfRange : public std::exception
{
    virtual const char* what() const throw()
    {return "Out of range";}
};

class Span
{
    public:
        Span(unsigned int n);
        Span(Span const &copy);
        ~Span();
        Span &operator=(Span &copy);

        void addNumber(int n);
        // void addNumbers(std::vector<int> new_elements, int start_add);
        int shortestSpan();
        int longestSpan();

    private:
        Span();
        unsigned int _n;
        unsigned int _size;
        std::vector<int> _array;
};

#endif