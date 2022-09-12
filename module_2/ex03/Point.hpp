/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 12:30:05 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/12 11:38:25 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point();
    Point (float const x, float const y);
    Point(Point &);
    float getX(void) const;
    float getY(void) const;
    void    setX(float x);
    void    setY(float y);
    Point & operator = (Point const &);
    ~Point();
};
bool
bsp(
    Point const a,
    Point const b,
    Point const c,
    Point const point);

#endif