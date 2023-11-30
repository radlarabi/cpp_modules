/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:55:49 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/30 22:49:29 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
Form::Form()
{
}

Form::Form(const std::string _name, const int _gradeSign, const int _gradeExecute)
: name(_name), gradeSign(_gradeSign), gradeExecute(__gradeExecute), sign(false)
{
}

Form::Form(Form const &other)
{
    this->name = other.name;
    this->sign = other.sign;
    this->name = other.gradeSign;
    this->name = other.gradeExecute;
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

const int Form::getGradeSign() const{
    return this->gradeSign;
}

const int Form::getGradeExecute() const{
    return this->gradeExecute;
}

const char * Form::GradeTooHighException::what() throw()
{
    return "The Grade is too high !!";
}

const char * Form::GradeTooLowException::what() throw()
{
    return "The Grade is too low !!";
}

std::ostream &operator << (std::ostream &out, Form const &br)
{
    return out;
}