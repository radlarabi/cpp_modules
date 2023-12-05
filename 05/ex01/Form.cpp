/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:55:49 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/05 17:04:42 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
Form::Form(): name("unkown_name"), sign(false), gradeSign(150), gradeExecute(150)
{
}

Form::Form(const std::string _name, const int _gradeSign, const int _gradeExecute)
: name(_name), sign(false), gradeSign(_gradeSign), gradeExecute(_gradeExecute) 
{
}

Form::Form(Form const &other): gradeSign(other.gradeSign), gradeExecute(other.gradeExecute)
{
    this->sign = other.sign;
}

Form &Form::operator = (Form const &other)
{
    if (this != &other)
        this->sign = other.sign;
    return (*this);
}

Form::~Form()
{
}

void Form::beSigned(Bureaucrat * b)
{
    if (b->getGrade() > this->getGradeSign())
        throw GradeTooLowException();
    else
        this->sign = true;
}

const std::string Form::getName() const{
    return this->name;
}

bool Form::getSigned() const{
    return this->sign;
}

int Form::getGradeSign() const{
    return this->gradeSign;
}

int Form::getGradeExecute() const{
    return this->gradeExecute;
}

const char * Form::GradeTooHighException::what() const throw()
{
    return "The Grade is too high !!";
}

const char * Form::GradeTooLowException::what() const throw()
{
    return "The Grade is too low !!";
}

std::ostream &operator << (std::ostream &out, Form const &br)
{
    out << "form name is " << br.getName() << std::endl;
    return out;
}