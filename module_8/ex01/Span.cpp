/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:41:07 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/27 13:41:09 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0)
{
    this->spans.reserve(N);
}

Span::Span(unsigned int _N) : N(_N)
{
    this->spans.reserve(N);
}

void Span::addNumber(int n)
{
    if (this->spans.size() >= N)
        throw std::out_of_range("out of range");
    this->spans.insert(this->spans.begin() + this->spans.size(), n);
}

const char *Span::notEnoughElemenentException::what(void) const _NOEXCEPT
{
    return "Not Enough Elements";
}

const char *Span::tooMuchElementException::what(void) const _NOEXCEPT
{
    return "Too much Elements to copy";
}

int Span::shortestSpan(void)
{
    if (this->spans.size() <= 1)
        throw Span::notEnoughElemenentException();
    std::sort(this->spans.begin(), this->spans.end());
    int tmp[this->spans.size()];
    for (size_t i = 0; i < this->spans.size() - 1; i++)
    {
        tmp[i] = std::abs(this->spans[i + 1] - this->spans[i]);
    }
    return *std::min_element(tmp, tmp + (this->spans.size() - 1));
}

int Span::longestSpan(void)
{
    if (this->spans.size() <= 1)
        throw Span::notEnoughElemenentException();
    int min = *std::min_element(this->spans.begin(), this->spans.end());
    int max = *std::max_element(this->spans.begin(), this->spans.end());
    return (max - min);
}

Span::Span(const Span &obj)
{
    this->N = obj.N;
    this->spans.reserve(obj.N);
    this->spans = obj.spans;
}

Span &Span::operator=(const Span &obj)
{
    this->spans.clear();
    this->N = obj.N;
    this->spans.reserve(this->N);
    this->spans = obj.spans;

    return *this;
}

void Span::fillSpans(std::vector<int> &tmp)
{
    if (tmp.size() > N)
        throw Span::tooMuchElementException();
    this->spans.insert(this->spans.begin(), tmp.begin(), tmp.end());
}

Span::~Span()
{
    this->spans.clear();
}


