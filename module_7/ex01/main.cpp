/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:44:09 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/21 21:41:50 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
public:
    Awesome(void) : _n(42) { return; }
    int get(void) const { return this->_n; }

private:
    int _n;
};

std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
{
    o << rhs.get();
    return o;
}

template <typename T>
void print(T const &x)
{
    std::cout << x << std::endl;
    return;
}

void applyString(std::string &s)
{
    s.append(" Something");
}

void applyInt(int &n)
{
    n *= 2;
}

int main()
{
    std::cout << " ===== My tests ==== \n";
    std::string s[3] = {"hello", "world", "Name"};
    iter(s, 3, applyString);
    std::cout << "After applying iter\n";
    for (int i = 0; i < 3; i++)
        std::cout << s[i] << "\n";
    std::cout << std::endl;
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    iter(nums, 10, applyInt);
    std::cout << "After applying iter\n";
    for (int i = 0; i < 10; i++)
        std::cout << nums[i] << "\n";
    std::cout << " ==== their tests ====\n"
              << std::endl;
    int tab[] = {0, 1, 2, 3, 4};
    Awesome tab2[5];
    iter(tab, 5, print);
    iter(tab2, 5, print);
    return 0;
}