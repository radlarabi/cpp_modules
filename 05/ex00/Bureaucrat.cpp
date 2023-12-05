/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:59:35 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/05 18:40:21 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("unkown_name"), grade(150) 
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
 
void Bureaucrat::increment(){
    if (this->grade == 1)
        throw GradeTooLowException();
    else
        this->grade--;
}

void Bureaucrat::decrement(){
    if(this->grade == 150)
        throw GradeTooHighException();
    else
        this->grade++;
}

std::ostream &operator << (std::ostream &out, Bureaucrat const &br)
{
    out << br.getName() << ", bureaucrat grade " << br.getGrade();
    return out;
}