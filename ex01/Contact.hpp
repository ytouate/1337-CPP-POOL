/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:12:36 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/01 12:21:30 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <iomanip>

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
    std::string    getSecret(void) const;
    std::string    getPhoneNumber(void) const;
    bool    setFirstName(void);
    bool    setLastName(void);
    bool    setPhoneNumber(void);
    bool    setNickName(void);
    bool    addContact(void);
    bool    setSecret(void);
    void    displayContact(int index) const;
    void    clearContactFiled(void);
    void    displayContactInDetails(int index) const;
};

#endif