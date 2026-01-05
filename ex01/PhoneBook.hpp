/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 12:01:21 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/01/05 17:36:00 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"
#include <cstdlib>
#include <unistd.h>
#include <iomanip>

class PhoneBook {
    private:
        Contact agenda[8];
        int n_contacts;
    public:
        PhoneBook();
        ~PhoneBook();
        void Add();
        void Search();
        bool Exit();
        std::string FormatTable(std::string);
};
#endif