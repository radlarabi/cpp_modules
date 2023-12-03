/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:59:30 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/03 16:46:31 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat bur("abc", 4);
        
        AForm *S = new ShrubberyCreationForm("home_1");
        AForm *R = new RobotomyRequestForm("home_2");
        AForm *P = new PresidentialPardonForm("home_3");
        
        bur.signForm(*S);
        bur.signForm(*R);
        bur.signForm(*P);
        
        bur.executeForm(*S);
        bur.executeForm(*R);
        bur.executeForm(*P);
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
