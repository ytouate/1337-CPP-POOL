/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormCreationException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:42:13 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/18 08:35:22 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(FORM_CREATION_EXCEPTION_CLAS)
#define FORM_CREATION_EXCEPTION_CLAS

#include <iostream>

class FormCreationException : public std::exception
{
private:
    
public:
    virtual const char *what() const _NOEXCEPT; //_GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW;
};

#endif // FORM_CREATION_EXCEPTION_CLAS
