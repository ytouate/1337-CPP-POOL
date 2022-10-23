/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:46:53 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/20 14:59:34 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

class Awesome
{
private:
    int _n;

public:
    Awesome(void) : _n(0) {}
    Awesome(int n) : _n(n) {}
    Awesome &operator=(Awesome &a)
    {
        _n = a._n;
        return *this;
    }
    bool operator==(Awesome const &rhs) const { return (this->_n == rhs._n); }
    bool operator!=(Awesome const &rhs) const { return (this->_n != rhs._n); }
    bool operator>(Awesome const &rhs) const { return (this->_n > rhs._n); }
    bool operator<(Awesome const &rhs) const { return (this->_n < rhs._n); }
    bool operator>=(Awesome const &rhs) const { return (this->_n >= rhs._n); }
    bool operator<=(Awesome const &rhs) const { return (this->_n <= rhs._n); }
    int get_n() const { return _n; }
};

std::ostream &operator<<(std::ostream &o, const Awesome &a)
{
    o << a.get_n();
    return o;
}

int main(void)
{
    int a = 2;
    int b = 3;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

    // testing with complex tipes
    Awesome x(2), y(4);
    swap(x, y);
    std::cout << "a == " << x << " b == " << y << std::endl;
    std::cout << "the max between x and y is " << max(x, y) << std::endl;
    std::cout << "the min between x and y is " << min(x, y) << std::endl;
    return 0;
}