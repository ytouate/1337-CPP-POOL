/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:48:22 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/18 08:31:50 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooLowException.hpp"

const char *GradeTooLowException::what() const _NOEXCEPT //_GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW
{
    return "Grade Too Low";
}