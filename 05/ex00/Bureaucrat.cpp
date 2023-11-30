/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:59:35 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/30 18:20:56 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name)
{
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
    this->grade = _grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : name(other.name) , grade(other.grade)
{
}

Bureaucrat &Bureaucrat::operator = (Bureaucrat const &other){
    if (this != &other)
    {
        this->grade = other.grade;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{    
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return "The Grade is too high !!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return "The Grade is too low !!";
}

const std::string Bureaucrat::getName() const{
    return this->name;    
}

int Bureaucrat::getGrade() const {
    return this->grade;
} 

std::ostream &operator << (std::ostream &out, Bureaucrat &br)
{
    out << br.getName() << ", bureaucrat grade " << br.getGrade() << std::endl;
    return out;
}