/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:44:02 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/11 14:51:14 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
int main() {
    Point a(0, 3);
    Point b(2, 1);
    Point c(3, 3);
    Point x(0, 0);
    if (bsp(a, b, c, x)){
        std::cout << "inside" << std::endl;
    }
    else {
        std::cout << "outside" << std::endl;
    }
}