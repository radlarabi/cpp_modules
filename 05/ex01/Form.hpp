/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:55:21 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/30 22:48:25 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
class Form
{
private:
    const std::string name;
    bool sign;
    const int gradeSign;
    const int gradeExecute;
public:
    class GradeTooHighException : public std::exception{
        public:
            const char * what() const throw();
    }
    class GradeTooLowException : public std::exception{
        public:
            const char * what() const throw();
    }
    Form();
    Form(Form const &other);
    Form(const std::string _name, const int _gradeSign, const int _gradeExecute);
    Form &operator = (Form const &other);
    ~Form();
    void beSigned(Bureaucrat *b);
    const std::string getName() const;
    bool getSigned() const;
    const int getGradeSign() const;
    const int getGradeExecute() const;
};

std::ostream &operator << (std::ostream &out, Form const &br);

#endif