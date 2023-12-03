/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:07:07 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/03 16:19:19 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <ctime>

class RobotomyRequestForm : public AForm
{
private:
    const std::string name;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string _name);
    RobotomyRequestForm(RobotomyRequestForm const &other);
    RobotomyRequestForm & operator = (RobotomyRequestForm const &other);
    ~RobotomyRequestForm();
    void execute(Bureaucrat const & executor) const;    
};

#endif