/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:06:42 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/01 09:14:51 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string    Contact::getFirstName(void) const{
    return (this->firstName);
}

std::string    Contact::getLastName(void) const{
    return (this->lastName);
}

std::string    Contact::getNickName(void) const{
    return (this->nickName);
}

bool    Contact::setFirstName(void) {
    std::string buffer;

    std::cout << "Insert the first name" << std::endl;
    std::getline(std::cin, buffer);
    if (!buffer.empty())
    {
        this->firstName = buffer;
        return (true);
    }
    else {
        std::cout << "Field cannot be blank !!" << std::endl;
        return (false);
    }
}

bool    Contact::setLastName(void) {
    std::string buffer;

    std::cout << "Insert the last name" << std::endl;
    std::getline(std::cin, buffer);
    if (!buffer.empty())
    {
        this->lastName = buffer;
        return (true);
    }
    else {
        std::cout << "Field cannot be blank !!" << std::endl;
        return (false);
    }
}

bool    Contact::setNickName(void) {
    std::string buffer;

    std::cout << "Insert the nick name" << std::endl;
    std::getline(std::cin, buffer);
    if (!buffer.empty())
    {
        this->nickName = buffer;
        return (true);
    }
    else {
        std::cout << "Field cannot be blank !!" << std::endl;
        return (false);
    }
}

bool    Contact::setPhoneNumber(void) {
    std::string buffer;

    std::cout << "Insert the phone number" << std::endl;
    std::getline(std::cin, buffer);
    if (!buffer.empty())
    {
        this->phoneNumber = buffer;
        return (true);
    }
    else {
        std::cout << "Field cannot be blank !!" << std::endl;
        return (false);
    }
}

bool    Contact::setSecret(void) {
    std::string buffer;

    std::cout << "what is your darkest secret ? " << std::endl;
    std::getline(std::cin, buffer);
    if (!buffer.empty())
    {
        this->darkestSecret = buffer;
        return (true);
    }
    else {
        std::cout << "Field cannot be blank !!" << std::endl;
        return (false);
    }
}

bool    Contact::addContact(void)
{

    if (   !this->setFirstName()
        or !this->setLastName()
        or !this->setNickName()
        or !this->setPhoneNumber()
        or !this->setSecret())
    {
        this->firstName = this->lastName = this->nickName = this->phoneNumber = this->darkestSecret = "";
        return (false);
    }
    return (true);
}

std::string    Contact::getSecret() const{
    return (this->darkestSecret);
}

std::string     Contact::getPhoneNumber() const {
    return (this->phoneNumber);
}

void    Contact::displayContactInDetails(int index) const {
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    phoneNumber = this->getPhoneNumber();
    darkestSecret = this->getSecret();
    firstName = this->getFirstName();
    lastName = this->getLastName();
    nickName = this->getNickName();
    phoneNumber = this->getPhoneNumber();
    darkestSecret = this->getSecret();

    std::cout << "index: " << index + 1 << std::endl;
    std::cout << "first name: " << firstName << std::endl;
    std::cout << "last name: " << lastName << std::endl;
    std::cout << "nick name: " << nickName << std::endl;
    std::cout << "phone number: " << phoneNumber << std::endl;
    std::cout << "darkest secret: " << darkestSecret << std::endl;
}

void    Contact::displayContact(int index) const{
    std::string firstName;
    std::string lastName;
    std::string nickName;

    firstName = this->getFirstName();
    lastName = this->getLastName();
    nickName = this->getNickName();

    std::cout << std::setfill(' ') << std::setw(10) << index << "|";
    firstName.length() > 10 ? std::cout << firstName.substr(0, 9) + "." :
        std::cout << std::setfill(' ') << std::setw(10) << firstName;
    std::cout << "|";
    lastName.length() > 10 ? std::cout << lastName.substr(0, 9) + "." :
        std::cout << std::setfill(' ') << std::setw(10) << lastName;
    std::cout << "|";
    nickName.length() > 10 ? std::cout << nickName.substr(0, 9) + "." :
        std::cout << std::setfill(' ') << std::setw(10) << nickName;
    std::cout << "\n"; 
}
