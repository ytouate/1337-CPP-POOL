#include "Span.hpp"

Span::Span() : N(0)
{
    this->spans = new int[0];
    this->nb_elements = 0;
}

Span::Span(unsigned int _N) : N(_N)
{
    this->spans = new int[this->N];
    this->nb_elements = 0;
}

void Span::addNumber(int n)
{
    if (nb_elements >= N)
        throw std::out_of_range("out of range");
    this->spans[nb_elements] = n;
    nb_elements++;
}

const char * Span::notEnoughElemenentException::what(void) const _NOEXCEPT
{
    return "Not Enough Elements";
}

int Span::shortestSpan( void )
{
    if (this->nb_elements <= 1)
        throw Span::notEnoughElemenentException();
    std::sort(this->spans, this->spans + this->nb_elements);
    int tmp[nb_elements];
    for (size_t i = 0; i < nb_elements - 1; i++)
    {
        tmp[i] = std::abs(this->spans[i + 1] - this->spans[i]);
    }
    return *std::min_element(this->spans, this->spans + this->nb_elements);
}

int Span::longestSpan ( void )
{
    if (this->nb_elements <= 1)
        throw Span::notEnoughElemenentException();
    int min = *std::min_element(this->spans, this->spans + this->nb_elements);
    int max = *std::max_element(this->spans, this->spans + this->nb_elements);
    return (max - min);
}

Span::~Span()
{
    delete [] this->spans;
}