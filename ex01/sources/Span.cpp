/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:40:12 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/27 16:57:16 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int n)
{
    _size = n;
    _n = 0;
    _array.reserve(n);
}

Span::~Span(){}

Span& Span::operator=(Span &copy)
{
    if (this != &copy)
    {
        for (unsigned int i = 0; i < copy._size; i++)
        {
            _array[i] = copy._array[i];
            _n = copy._n;
        }        
    }
    return *this;
}

void Span::addNumber(int n)
{
    if (_n >= _size)
        throw OutOfRange();
    _array[_n] = n;
    std::cout << "value add : " << _array[_n] << std::endl;
    _n++;
}

int Span::shortestSpan()
{
    if (_n <= 1)
        throw OutOfRange();
    if (_n == 2)
        return _array[1] - _array[0];
    int min = _array[0];
    int max = _array[1];
    for (unsigned int i = 0; i < _n; i++)
    {
        if (_array[i] > min && _array[i] < max)
            min = _array[i];
        if (_array[i] < max && _array[i] > min)
            max = _array[i];
    }
    return max - min;
}

int Span::longestSpan()
{
    if (_n <= 1)
        throw OutOfRange();
    int min = _array[0];
    int max = _array[0];
    for (unsigned int i = 0; i < _n; i++)
    {
        if (_array[i] < min)
            min = _array[i];
        if (_array[i] > max)
            max = _array[i];
    }
    return max - min;
}
