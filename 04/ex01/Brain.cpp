/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:30:31 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/19 00:46:01 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain::Brain(std::string ideas)
{
    this->ideas[0] = ideas;
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(Brain const &src)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &src)
        this->ideas[0] = src.ideas[0];
    return (*this);
}

std::string *Brain::getIdeas()
{
    return (this->ideas);
}

void Brain::setIdeas(std::string ideas)
{
    this->ideas[0] = ideas;
}