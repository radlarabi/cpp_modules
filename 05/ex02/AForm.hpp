/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:55:21 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/03 19:10:58 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
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
    };
    class GradeTooLowException : public std::exception{
        public:
            const char * what() const throw();
    };
    AForm();
    AForm(AForm const &other);
    AForm(const std::string _name, const int _gradeSign, const int _gradeExecute);
    AForm &operator = (AForm const &other);
    virtual ~AForm();
    void beSigned(Bureaucrat &b);
    const std::string getName() const;
    bool getSigned() const;
    void setSigned(bool _sign);
    int getGradeSign() const;
    int getGradeExecute() const;
    virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator << (std::ostream &out, AForm const &br);

#endif