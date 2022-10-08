/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:52:11 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/27 18:07:06 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "main.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *brain;

public:
    Cat();
    Cat(std::string type);
    Cat(const Cat &);
    Cat &operator=(const Cat &);
    Brain *getBrain(void) const;
    virtual void fillIdeas();
    void makeSound() const;
    ~Cat();
};
#endif