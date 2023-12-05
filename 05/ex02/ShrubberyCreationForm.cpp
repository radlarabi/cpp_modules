/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:41:45 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/05 18:42:42 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm(){
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string _name): AForm(_name, 145, 137), name(_name){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other): AForm(other.getName(), 145, 137), name(other.name){
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (ShrubberyCreationForm const &other){
    this->setSigned(other.getSigned());
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getGradeExecute() >= executor.getGrade() && this->getSigned())
    {
        std::string fileName = this->getName() + "_shrubbery";
        std::ofstream output(fileName.c_str());
        if (output.is_open())
        {
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
        else
            throw std::runtime_error("cannot create the file " + fileName);
        std::cout << "the file " << fileName << " has been created" << std::endl;
        output.close();
    }
    else
        throw GradeTooLowException();
}
