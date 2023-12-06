/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:59:30 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/06 15:08:26 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Bureaucrat bur("abc", 4);
        Intern someRandomIntern;
        AForm *rrf = someRandomIntern.makeForm("robotomyx request", "Bender");
        if (rrf)
        {
            bur.signForm(*rrf);
            bur.executeForm(*rrf);
        }
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
