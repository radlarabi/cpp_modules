/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:24:54 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/03 19:07:10 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    const std::string name;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string _name);
    PresidentialPardonForm(PresidentialPardonForm const &other);
    PresidentialPardonForm & operator = (PresidentialPardonForm const &other);
    ~PresidentialPardonForm();
    void execute(Bureaucrat const & executor) const;    
};

#endif