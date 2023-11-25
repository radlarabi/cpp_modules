/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:28:07 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/25 15:11:45 by rlarabi          ###   ########.fr       */
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
    Brain(Brain const &src);
    ~Brain();
    Brain& operator=(Brain const &src);
};
#endif