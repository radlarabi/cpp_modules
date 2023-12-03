/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:11:28 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/03 16:22:38 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){
}

RobotomyRequestForm::RobotomyRequestForm(const std::string _name): AForm(_name, 72, 45), name(_name){
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other): AForm(other.getName(), 145, 137), name(other.name){
}

RobotomyRequestForm &RobotomyRequestForm::operator = (RobotomyRequestForm const &other){
    this->setSigned(other.getSigned());
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getGradeExecute() > executor.getGrade() && this->getSigned())
    {
        time_t current_time;

        current_time = time(NULL);
        if (current_time % 2)
            std::cout << this->getName() << " has been robotomized successfully" << std::endl;
        else
            std::cout << this->getName() << " robotomy failed" << std::endl;

    }
    else
        throw GradeTooLowException();
}