/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:32:07 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/03 18:34:40 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern"

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

*AForm Intern::makeForm(std::string name, std::string target){
}

