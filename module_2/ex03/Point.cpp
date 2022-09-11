/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:46:29 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/11 15:08:40 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float Point::getX(void) const {
  return (this->x.toFloat());
}

float Point::getY(void) const{
  return (this->y.toFloat());
}

Point::Point() : x(0), y(0) {}

Point::Point(float const x, float const y): x(x), y(y) {}

void  Point::setX(float x){
	this->x.setRawBits(x);
}
void	Point::setY(float y){
	this->y.setRawBits(y);
}

Point::~Point() {
  return ;
}

Point::Point(Point &bluePrint) {
  this->x = bluePrint.x;
  this->y = bluePrint.y;
}