/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:59:35 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/05 18:41:01 by rlarabi          ###   ########.fr       */
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

void Bureaucrat::signForm(AForm &f)
{
    try
    {
        f.beSigned(*this);
        std::cout << this->getName() << " signed " << f.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " couldn’t sign " << f.getName() << " because  " << e.what() << std::endl;
    }
    
}

void Bureaucrat::executeForm(AForm const & form){
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " execute " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " cannot execute " << form.getName() << std::endl;
    }
    
}

std::ostream &operator << (std::ostream &out, Bureaucrat const &br)
{
    out << br.getName() << ", bureaucrat grade " << br.getGrade();
    return out;
}