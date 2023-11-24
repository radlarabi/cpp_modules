/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Struct.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:42:25 by rlarabi           #+#    #+#             */
/*   Updated: 2023/11/24 13:45:48 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_HPP
#define STRUCT_HPP
#include "AMateria.hpp"

typedef struct Sadrs{
    AMateria *materia;
    struct Sadrs *next;
} Adrs;

#endif