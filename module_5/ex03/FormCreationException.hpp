/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormCreationException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:42:13 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/08 19:05:16 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(FORM_CREATION_EXCEPTION_CLAS)
#define FORM_CREATION_EXCEPTION_CLAS

#include <iostream>

class FormCreatingException : public std::exception
{
private:
    
public:
    virtual const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW;
};

#endif // FORM_CREATION_EXCEPTION_CLAS
