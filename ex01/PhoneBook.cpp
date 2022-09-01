/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:35:52 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/01 17:08:01 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
int    PhoneBook::contact_count = 0;

bool    PhoneBook::requestContact(int index){
    if (this->contacts[index].addContact())
        return (true);
    return (false);
}

void    PhoneBook::setContactCount(int val){
    PhoneBook::contact_count = val;
}

void    PhoneBook::exitPhoneBook(void) const{
    std::cout << "Good Bye" << std::endl;
    clearerr(stdin);
    std::cin.clear();
    exit(0);
}

void    PhoneBook::searchContact(int index) const
{
    if (index >= this->getContactCount()  or index < 0)
        std::cerr << "Please Insert an index withi 1 and 8" << std::endl;
    else
        this->contacts[index].displayContactInDetails(index);
}

void    PhoneBook::displayAllContacts(int nbContact) {
    for (int i = 0; i < this->getContactCount(); i++)
        this->contacts[i].displayContact(i);
}