/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:43:55 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/09 21:20:43 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
class Fixed
{
private:
    int fixedPointNumberValue;
    static const int    nbFractions;
public:
    Fixed();
    Fixed(Fixed &);
    Fixed & operator = (Fixed &);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    ~Fixed();
};

#endif