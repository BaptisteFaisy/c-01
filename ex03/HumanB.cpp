/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:29:00 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/24 16:06:21 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name1){
	name = name1;
}

HumanB::~HumanB(){}

void HumanB::attack(){
	std::cout << name << "attacks with their" << weapon.getType() << std::endl;
}

void setWeapon(Weapon weapon1){
	weapon = weapon1;
}