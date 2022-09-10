/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:43:50 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/10 18:08:17 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::nbFractions = 8;

Fixed::Fixed() {
    std::cout << "constructor called" << std::endl;
    this->fixedPointNumberValue = 0;
}

Fixed & Fixed::operator=(Fixed &copy) {
    std::cout << "Copy assignment operator called" << std::endl;
    copy.fixedPointNumberValue = this->fixedPointNumberValue;
    return (*this);
}

Fixed::Fixed(Fixed const &obj) {
    this->fixedPointNumberValue = obj.fixedPointNumberValue;
    std::cout << "Copy constructor called" << std::endl;
}

void    Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointNumberValue = raw;
}

int Fixed::getRawBits() const {
    std::cout << "getRawbits member function called" << std::endl;
    return (this->fixedPointNumberValue);
}

Fixed::~Fixed() {
    std::cout << "destructor called" << std::endl;
}

Fixed::Fixed(int const n) {
    this->fixedPointNumberValue = n << this->nbFractions;
}

Fixed::Fixed(float const n) {
    this->fixedPointNumberValue = roundf(n * ((1 << this->nbFractions)));
}

float	Fixed::toFloat(void) const {
    float x = (float)this->fixedPointNumberValue / (float)(1 << nbFractions);
    return (x);
}

int		Fixed::toInt(void) const {
	return (this->fixedPointNumberValue >> this->nbFractions);
}
