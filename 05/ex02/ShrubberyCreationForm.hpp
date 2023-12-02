/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:38:42 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/02 17:33:45 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    const std::string name;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string _name);
    ShrubberyCreationForm(ShrubberyCreationForm const &other);
    ShrubberyCreationForm & operator = (ShrubberyCreationForm const &other);
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const & executor) const;
};

#endif