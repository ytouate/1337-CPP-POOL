/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:36 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/24 20:38:43 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_H
#define WrongAnimal_H

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(WrongAnimal &);
    WrongAnimal &operator=(WrongAnimal &);
    std::string getType(void) const;
    virtual void makeSound() const;
    virtual ~WrongAnimal();
};

#endif