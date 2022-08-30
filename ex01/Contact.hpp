/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:12:36 by ytouate           #+#    #+#             */
/*   Updated: 2022/08/30 10:26:06 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
public:
    std::string    getFirstName(void) const;
    std::string    getLastName(void) const;
    std::string    getNickName(void) const;
    void    addContact(void);
    void    displayContact(int index) const;
    void    clearContactFiled(void);
};

#endif