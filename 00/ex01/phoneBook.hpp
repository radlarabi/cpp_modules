/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:18:18 by rlarabi           #+#    #+#             */
/*   Updated: 2023/08/09 15:17:09 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNum;
    std::string darkSecret;
    int id;
public:
    Contact();
    ~Contact();
    void init(void);
    void setId(int id);
    void display(void);
    void displayDetails(void);
};

class PhoneBook
{
private:
    Contact contact[8];
    int nbrContacts;
    void display_all(void);
public:
    PhoneBook();
    ~PhoneBook();
    void add(void);
    void search(void);
};

void    welcome(void);

#endif