/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:43:50 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/11 12:27:12 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nbFractions = 8;

Fixed::Fixed() {
    this->fixedPointNumberValue = 0;
}

std::istream & operator >> (std::istream &is, Fixed &obj) {
    int raw;
    is >> raw;
    if (is) {
        obj.setRawBits(raw);
    }
    return (is);
}

Fixed & Fixed::operator=(Fixed const &copy) {
    this->fixedPointNumberValue = copy.fixedPointNumberValue;
    return (*this);
}

bool Fixed::operator == (Fixed const &obj) {  
    return (this->fixedPointNumberValue == obj.fixedPointNumberValue);
}

Fixed Fixed::operator+ (Fixed const &obj) {
    return (Fixed(this->fixedPointNumberValue + obj.fixedPointNumberValue));
}

Fixed Fixed::operator* (Fixed const &obj) {
    
    return Fixed(
        ((float)obj.fixedPointNumberValue / (1 << nbFractions) * (float)this->fixedPointNumberValue)
        / (1 << nbFractions) 
    );
}

Fixed Fixed::operator- (Fixed const &obj) {
    return (Fixed(this->fixedPointNumberValue - obj.fixedPointNumberValue));
}

Fixed Fixed::operator/ (Fixed const &obj) {
    return (Fixed(this->fixedPointNumberValue / obj.fixedPointNumberValue));
}

bool Fixed::operator != (Fixed const &obj) {
    return (obj.fixedPointNumberValue != this->fixedPointNumberValue);
}

bool Fixed::operator > (Fixed const &obj) const{
    return (this->fixedPointNumberValue > obj.fixedPointNumberValue);
}

bool Fixed::operator < (Fixed const &obj) const{
    return (this->fixedPointNumberValue < obj.fixedPointNumberValue);
}

bool Fixed::operator >= (Fixed const &obj) {
    return (this->fixedPointNumberValue >= obj.fixedPointNumberValue);
}

bool Fixed::operator <= (Fixed const &obj) {
    return (this->fixedPointNumberValue <= obj.fixedPointNumberValue);
}

Fixed::Fixed(Fixed const &obj) {
    this->fixedPointNumberValue = obj.fixedPointNumberValue;
}

void    Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointNumberValue = raw;
}

int Fixed::getRawBits() const {
    // std::cout << "getRawbits member function called" << std::endl;
    return (this->fixedPointNumberValue);
}

Fixed::~Fixed() {
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

Fixed&  Fixed::operator++ (void) {
    ++(this->fixedPointNumberValue);
    return (*this);
}

Fixed&  Fixed::operator-- (void) {
    --(this->fixedPointNumberValue);
    return (*this);
}

Fixed  Fixed::operator++ (int post) {
    (void)post;

    Fixed temp;
    temp = *this;
    ++(this->fixedPointNumberValue);
    return (temp);
}

Fixed  Fixed::operator-- (int post) {
    (void)post;
    Fixed temp = *this;
    ++(this->fixedPointNumberValue);
    return (temp);
}

Fixed&  Fixed::min(Fixed &ref1, Fixed &ref2) {
    return (ref1 < ref2 ? ref1 : ref2);
}

const Fixed&  Fixed::min(Fixed const &ref1, Fixed const &ref2) {
    return (ref1 < ref2 ? ref1 : ref2);
}

Fixed&  Fixed::max(Fixed &ref1, Fixed &ref2) {
    return (ref1 > ref2 ? ref1 : ref2);
}

const Fixed&    Fixed::max(Fixed const &ref1, Fixed const &ref2) {
    return (ref1 > ref2 ? ref1 : ref2);
}

std::ostream & operator<< (std::ostream &os, const Fixed &obj){
    os << obj.toFloat();
    return os;
}

int		Fixed::toInt(void) const {
	return (this->fixedPointNumberValue >> this->nbFractions);
}
