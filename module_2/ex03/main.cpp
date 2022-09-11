/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:44:02 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/11 15:32:14 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
int main() {
    Point a(0, 3);
    Point b(2, 1);
    Point c(3, 3);
    Point x;
    Point y(2.5, 2.5);
    Point j(2, 2);
    Point i(2.5, 3.1);
    Point cCopy(c);
    Point aCopy(a);
    Point bCopy(b);
    std::cout << "x: " << (bsp(a, b, c, x) ? "is insde\n" : "is outside\n");
    std::cout << "y: " << (bsp(a, b, c, y) ? "is insde\n" : "is outside\n");
    std::cout << "j: " << (bsp(a, b, c, j) ? "is insde\n" : "is outside\n");
    std::cout << "i: " << (bsp(a, b, c, i) ? "is insde\n" : "is outside\n");
    std::cout << "cCopy: " << (bsp(a, b, c, cCopy) ? "is insde\n" : "is outside\n");
    std::cout << "aCopy: " << (bsp(a, b, c, aCopy) ? "is insde\n" : "is outside\n");
    std::cout << "bCopy: " << (bsp(a, b, c, bCopy) ? "is insde\n" : "is outside\n");
}