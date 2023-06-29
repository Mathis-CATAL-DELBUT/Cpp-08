/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:40:12 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/29 11:58:07 by mcatal-d         ###   ########.fr       */
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
    _array.push_back(n);
    std::cout << "value add : " << _array[_n] << std::endl;
    _n++;
}

// void Span::addNumbers(std::vector<int> new_elements, int start_add)
// {
//     if (_array.size() - start_add + new_elements.size() > _size)
//         throw OutOfRange();
//     _array.insert(_array.begin() + start_add, new_elements.begin(), new_elements.end());
//     if (start_add + new_elements.size() > _n)
//         _n = start_add + new_elements.size();
//     std::cout << "value add : " << _array[0] << _array[1] << _array[2] << _array
// }

int Span::shortestSpan() {
    if (_n == 0 || _n == 1)
        throw OutOfRange();
    else
    {
        std::sort (this->_array.begin(), this->_array.end());
        int shortest = _array[1] - _array[0];
        for (unsigned int i = 0; i < _n - 1; i++)
        {
            if (_array[i + 1] - _array[i] < shortest)
                shortest = _array[i + 1] - _array[i];
        }
        return (shortest);
    }
    return 0;
}

int Span::longestSpan()
{
    if (_n <= 1)
        throw OutOfRange();
    std::sort(_array.begin(), _array.end());
    return _array[_n - 1] - _array[0];
}
