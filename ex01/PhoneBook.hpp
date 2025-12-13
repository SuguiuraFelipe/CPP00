/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 12:01:21 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/12/13 13:11:36 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook {
    private:
        Contact agenda[8];
        int n_contacts;
    public:
        PhoneBook();
        ~PhoneBook();
        void Add();
        void Search();
        void Exit();
};
#endif