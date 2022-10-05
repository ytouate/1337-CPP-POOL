/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormCreationException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:44:56 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/05 18:45:44 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FormCreatingException.hpp"

const char *FormCreatingException::what() const _NOEXCEPT
{
    return "Cannot Create Form";
}