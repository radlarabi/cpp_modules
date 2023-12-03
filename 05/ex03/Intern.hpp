/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:28:34 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/03 18:32:24 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"

class Intern
{
public:
    Intern();
    Intern(Intern const &other);
    Intern & operator = (Intern const &other);
    ~Intern();
    *AForm makeForm(std::string name, std::string target);    
};
#endif