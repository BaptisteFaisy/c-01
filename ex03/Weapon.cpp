/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:28:07 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/24 15:27:05 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType() const{
	return (type);
}

void Weapon::setType(std::string type1){
	type = type1;
}

Weapon::Weapon(std::string type1){
	type = type1;
}

Weapon::~Weapon(){}