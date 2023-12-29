/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:06:49 by rlarabi           #+#    #+#             */
/*   Updated: 2023/12/29 12:59:36 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <ostream>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>

void open_file(char **av);
std::map<unsigned int, float> insertDB();

#endif