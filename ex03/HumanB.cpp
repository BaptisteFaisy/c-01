/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:29:00 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/26 14:36:59 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name1) : name(name1){
	weapon = NULL;
}

HumanB::~HumanB(){}

void HumanB::attack(){
	if (weapon->getType() != "")
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
	{
		std::cout << "Doesnt have weapon"<< std::endl;
	}
}

void HumanB::setWeapon(Weapon &weapon1){
	weapon = &weapon1;
}