/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notFoundException.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:38:54 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/24 16:38:55 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "notFoundException.hpp"

const char * notFoundException::what(void) const _NOEXCEPT
{
    return "Element Not Found";
}