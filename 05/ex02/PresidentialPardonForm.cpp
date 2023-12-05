/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:26:45 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/05 17:09:02 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){
}

PresidentialPardonForm::PresidentialPardonForm(const std::string _name): AForm(_name, 25, 5), name(_name){
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other): AForm(other.getName(), 145, 137), name(other.name){
}

PresidentialPardonForm &PresidentialPardonForm::operator = (PresidentialPardonForm const &other){
    this->setSigned(other.getSigned());
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getGradeExecute() >= executor.getGrade() && this->getSigned())
    {
        std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;             
    }
    else
        throw GradeTooLowException();
}