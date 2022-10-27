#include "Span.hpp"

int main()
{

    std::cout << "=== their tests ===\n";
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "\n=== my tests ===\n";
    std::srand(time(NULL));
    std::vector<int> tmp;
    tmp.reserve(100000);
    for (int i = 0; i < 100000; i++)
    {
        const int val = rand();
        tmp.push_back(val);
    }
    std::cout << "CAPACITY: " << tmp.capacity() << std::endl;
    std::cout << "SIZE: " << tmp.size() << std::endl;
    Span s = Span(100000);
    s.fillSpans(tmp);
    std::cout << "shortest span ==  " << s.shortestSpan() << std::endl;
    std::cout << "longest span == " << s.longestSpan() << std::endl;
}