/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormCreationException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:44:56 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/08 19:05:11 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FormCreationException.hpp"

const char *FormCreatingException::what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW
{
    return "Cannot Create Form";
}