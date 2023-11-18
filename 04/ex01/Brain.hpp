/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:28:07 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/19 00:31:22 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>
#include <string>
class Brain
{
private:
    std::string	ideas[100];
public:
    Brain();
    Brain(std::string ideas);
    Brain(Brain const &src);
    ~Brain();
    Brain& operator=(Brain const &src);
    std::string *getIdeas();
    void setIdeas(std::string *ideas);
};
#endif