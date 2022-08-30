/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:36:57 by ytouate           #+#    #+#             */
/*   Updated: 2022/08/29 13:23:54 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

void upper(char *s)
{
    for (; *s; s++){
        *s = toupper(*s);
    }
}

int main(int ac, char **av){
    std::string result;

    if (ac == 1)
        result.assign("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
    for (int i = 1; i < ac; i++){
        upper(av[i]);
        result += av[i];
    }
    std::cout << result << std::endl;
}
