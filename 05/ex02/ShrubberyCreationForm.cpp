/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:41:45 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/02 16:48:32 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string _name): AForm(_name, 145, 137), name(_name){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other): AForm(other.getName(), 145, 137), name(other.name){
}

ShrubberyCreationForm ShrubberyCreationForm::operator = (ShrubberyCreationForm const &other): AForm(other.getName(), 145, 137){
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (this->getGradeExecute() < executor.getGrade())
    {
        std::ofstream output(this->getName() + "_shrubbery");
        if (output.is_open())
            drawTree(output);
        output.close();
    }
    else
        throw GradeTooLowException();
}

void drawTree(std::ofstream output){
    output << "         ccee88oo\n";
    output << "  C8O8O8Q8PoOb o8oo\n";
    output << " dOB69QO8PdUOpugoO9bD\n";
    output << "CgggbU8OU qOp qOdoUOdcb\n";
    output << "    6OuU  /p u gcoUodpP\n";
    output << "      \\\\//  /douUP\n";
    output << "        \\\\////\n";
    output << "         |||//\n";
    output << "         |||\\\\\n";
    output << "         |||||\n";
    output << "   .....\\/\\/||||\\....\n";
}