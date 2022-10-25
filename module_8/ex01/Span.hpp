#if !defined(SPAN_HPP)
#define SPAN_HPP
#include <iostream>
#include <vector>

class Span
{
private:
    unsigned int N;
    std::vector <int> spans;
public:
    Span();
    Span(unsigned int );
    void addNumber(int n);
    int shortestSpan();
    int longestSpan();
    class notEnoughElemenentException : public std::exception
    {
        public:
        const char * what( void ) const _NOEXCEPT;
    };
    ~Span();
};

#endif // SPAN_HPP
