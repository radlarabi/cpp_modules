/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:59:33 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/30 18:30:29 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    class GradeTooHighException : public std::exception{
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception{
        public:
            const char* what() const throw();
    };
    Bureaucrat();
    Bureaucrat(Bureaucrat const &other);
    Bureaucrat(const std::string _name, int _grade);
    Bureaucrat &operator = (Bureaucrat const &other);
    ~Bureaucrat();
    const std::string getName() const;
    int getGrade() const;
};

std::ostream &operator << (std::ostream &out, Bureaucrat &other);

#endif
