/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:59:30 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/02 18:17:05 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        // Bureaucrat a("abc", 10);
        // AForm *s = new ShrubberyCreationForm("home");
        // a.signForm(s);
        // s->execute(a);
        Bureaucrat bureaucrat("abc", 1);
        AForm *A = new ShrubberyCreationForm("home");
        bureaucrat.signForm(*A);
        A->execute(bureaucrat);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
