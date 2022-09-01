/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:34:36 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/01 12:27:51 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
# define PhoneBook_HPP

#define MAX_CONTACTS 8
#include "Contact.hpp"

class PhoneBook {
private:
Contact contacts[MAX_CONTACTS];
public:
    bool    requestContact(int index);
    void    displayAllContacts(int nbContact) const;
    void    searchContact(int index) const;
    void    exitPhoneBook() const;
};

#endif // PhoneBook.hpp