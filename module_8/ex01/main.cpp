#include "Span.hpp"

int main()
{
    std::srand(time(NULL));
    std::vector <int> tmp;
    tmp.reserve(10);
    for (int i = 0; i < 100000; i++)
    {
        const int val = rand();
        tmp.push_back(val);
    }
    Span sp = Span(100000);
    sp.fillSpans(tmp);
    std::cout << "shortest span ==  " << sp.shortestSpan() << std::endl;
    std::cout << "longest span == " << sp.longestSpan() << std::endl;
}