/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 12:05:42 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/12/13 13:17:45 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string dark_secret;
    public:
        Contact(
            std::string first_name,
            std::string last_name,
            std::string nickname,
            std::string phone_number,
            std::string dark_secret
        );
        Contact();
        ~Contact();
        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        std::string getPhoneNumber();
        std::string getDarkSecret();
        
        void setFirstName(std::string first_name);
        void setLastName(std::string last_name);
        void setNickname(std::string nickname);
        void setPhoneNumber(std::string phone_number);
        void setDarkSecret(std::string dark_secret);
};
#endif