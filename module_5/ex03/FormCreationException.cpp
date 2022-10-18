/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormCreationException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:44:56 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/18 08:35:03 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FormCreationException.hpp"

const char *FormCreationException::what() const _NOEXCEPT //_GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW
{
    return "Cannot Create Form";
}