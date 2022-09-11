/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 12:34:36 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/11 14:53:15 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


float getArea(float x1,float y1, float x2, float y2, float x3, float y3) {
    float result = (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0f;
    return result >= 0 ? result : result * -1;
}

bool
bsp(
    Point const a,
    Point const b,
    Point const c,
    Point const point)
{
    float aArea;
    float bArea;
    float cArea;
    float rectArea;

    aArea = getArea(a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY());
    bArea = getArea(b.getX(), b.getY(), c.getX(), c.getY(), point.getX(), point.getY());
    cArea = getArea(c.getX(), c.getY(), a.getX(), a.getY(), point.getX(), point.getY());
    rectArea = getArea(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY());
    return (rectArea == (aArea + bArea + cArea));
}