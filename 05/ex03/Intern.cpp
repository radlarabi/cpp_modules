/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:32:07 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/03 19:06:20 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){   
}

Intern::Intern(Intern const &other){   
    (void)other;
}

Intern &Intern::operator = (Intern const &other){   
    (void)other;
    return (*this);
}

Intern::~Intern(){
}

int getTargetId(std::string name)
{
    if (name == "shrubbery creation")
        return 0;
    else if (name == "robotomy request")
        return 1;
    else if (name == "presidential pardon")
        return 2;
    return 3;
}

AForm *Intern::makeForm(std::string name, std::string target){
    int i = getTargetId(name);
    switch (i)
    {
        case 0 :
            std::cout << "Intern creates " << target << std::endl;
            return new ShrubberyCreationForm(target); 
            break;
        case 1 :
            std::cout << "Intern creates " << target << std::endl;
            return new RobotomyRequestForm(target); 
            break;
        case 2 :
            std::cout << "Intern creates " << target << std::endl;
            return new PresidentialPardonForm(target); 
            break;
        default:
            std::cout << "Intern didn't fined " << target << std::endl;
            return NULL;
            break;
    }
}

