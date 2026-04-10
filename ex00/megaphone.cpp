/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 10:52:45 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/04/10 15:19:25 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    int i = 1;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    
    while (av[i])
    {
        int j = 0;
        while (av[i][j])
        {
            std::cout << (char)std::toupper(av[i][j]);
            j++;
        }
        if (av[i + 1])
            std::cout << " ";
        i++;
    }
    std::cout << std::endl;
    return 0;
}