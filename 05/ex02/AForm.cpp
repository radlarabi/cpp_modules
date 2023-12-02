/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:55:49 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/02 18:09:42 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): sign(false), gradeSign(150), gradeExecute(150)
{
}

AForm::AForm(const std::string _name, const int _gradeSign, const int _gradeExecute)
: name(_name), sign(false), gradeSign(_gradeSign), gradeExecute(_gradeExecute) 
{
}

AForm::AForm(AForm const &other): gradeSign(other.gradeSign), gradeExecute(other.gradeExecute)
{
    this->sign = other.sign;
}

AForm &AForm::operator = (AForm const &other)
{
    if (this != &other)
        this->sign = other.sign;
    return (*this);
}

AForm::~AForm()
{
}

void AForm::beSigned(Bureaucrat & b)
{
    if (b.getGrade() > this->getGradeSign())
        throw GradeTooLowException();
    else
        this->sign = true;
}

const std::string AForm::getName() const{
    return this->name;
}

bool AForm::getSigned() const{
    return this->sign;
}

int AForm::getGradeSign() const{
    return this->gradeSign;
}

int AForm::getGradeExecute() const{
    return this->gradeExecute;
}

const char * AForm::GradeTooHighException::what() const throw()
{
    return "The Grade is too high !!";
}

const char * AForm::GradeTooLowException::what() const throw()
{
    return "The Grade is too low !!";
}

std::ostream &operator << (std::ostream &out, AForm const &br)
{
    out << "Aform name is " << br.getName() << std::endl;
    return out;
}