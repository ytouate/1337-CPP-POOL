/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:32:48 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/18 21:58:37 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(BASE_HPP)
#define BASE_HPP

#include <cstdlib>
#include <iostream>

class Base
{
private:
public:
    virtual ~Base();
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);
#endif // BASE_HPP
