/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:34:36 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/01 17:17:52 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
# define PhoneBook_HPP

#include "Contact.hpp"

class PhoneBook {
private:
    static int contact_count;
    Contact contacts[8];
public:
    int     getContactCount(void) const;
    void    setContactCount(int);
    bool    requestContact(int index);
    void    displayAllContacts(void);
    void    searchContact(int index) const;
    void    exitPhoneBook() const;
};

#endif // PhoneBook.hpp