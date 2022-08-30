/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Declare.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:51:09 by ytouate           #+#    #+#             */
/*   Updated: 2022/08/30 12:54:28 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

std::string    Contact::getFirstName(void) const{
    return (this->firstName);
}

std::string    Contact::getLastName(void) const{
    return (this->lastName);
}

std::string    Contact::getNickName(void) const{
    return (this->nickName);
}

void Contact::addContact(void)
{
    std::cout << "Insert the firstName" << std::endl;
    std::getline(std::cin, this->firstName);
    std::cout << "Insert the lastName" << std::endl;
    std::getline(std::cin, this->lastName);
    std::cout << "Insert the nickName" << std::endl;
    std::getline(std::cin, this->nickName);
    std::cout << "Insert the Phone Number" << std::endl;
    std::getline(std::cin, this->phoneNumber);
    std::cout << "What is Your Darkest Secret ?" << std::endl;
    std::getline(std::cin, this->darkestSecret);
}

void    Contact::displayContact(int index) const{
    std::string firstName;
    std::string lastName;
    std::string nickName;

    firstName = this->getFirstName();
    lastName = this->getLastName();
    nickName = this->getNickName();

    firstName = firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName;
    lastName = lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName;
    nickName = nickName.length() > 10 ? nickName.substr(0, 9) + "." : nickName;

    std::cout << index + 1 << " |" + firstName + " |" << lastName + " |"  << nickName +  " |" << std::endl;
}

void    PhoneBook::requestContact(int index){
    this->contacts[index].addContact();
}

void    PhoneBook::exitPhoneBook(void) const{
    std::cout << "Good Bye" << std::endl;
    clearerr(stdin);
    std::cin.clear();
    exit(0);
}

void    PhoneBook::searchContact(int index) const
{
    if (index >= MAX_CONTACTS or index < 0)
        std::cerr << "Please Insert an index withi 0 and 8" << std::endl;
    else
        this->contacts[index].displayContact(index);
}
