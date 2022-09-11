/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:43:55 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/11 12:00:08 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
private:
    int fixedPointNumberValue;
    static const int    nbFractions;
public:
    Fixed();
    Fixed(Fixed const &);
    Fixed(const int n);
    Fixed(const float n);
    int		toInt(void) const;
    int		getRawBits(void) const;
    float	toFloat(void) const;
    // additional overloads
    Fixed&	operator = (Fixed const &obj);
    Fixed   operator + (Fixed const &obj);
    Fixed   operator * (Fixed const &obj);
    Fixed   operator / (Fixed const &obj);
    Fixed   operator - (Fixed const &obj);
    Fixed&  operator++ (void);
    Fixed&  operator-- (void);
    Fixed  operator++ (int);
    Fixed  operator-- (int);
    bool    operator == (Fixed const &obj);
    bool    operator != (Fixed const &obj);
    bool    operator <= (Fixed const &obj);
    bool    operator >= (Fixed const &obj);
    bool    operator < (Fixed const &obj) const;
    bool    operator > (Fixed const &obj) const;
    void	setRawBits(int const raw);
    static Fixed&  min(Fixed &, Fixed &);
    static const Fixed&  min(Fixed const &, Fixed const &);
    static Fixed&  max(Fixed &, Fixed &);
    static const Fixed&  max(Fixed const &, Fixed const &);
    ~Fixed();
};
    // bool    operator < (Fixed const &a, Fixed const &obj);
    // bool    operator > (Fixed const &a, Fixed const &obj);
    std::istream & operator >> (std::istream &is, Fixed &);
    std::ostream&	operator<<(std::ostream &os, const Fixed &);

#endif