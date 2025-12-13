/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 10:52:45 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/12/13 11:32:12 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
}