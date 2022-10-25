#include "Span.hpp"

int main()
{
    std::srand(time(NULL));
    std::vector <int> tmp;
    tmp.reserve(100000);
    for (int i = 0; i < 100000; i++)
        tmp.push_back(rand());
    
    Span sp = Span(100000);
    sp.fillSpans(tmp);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}