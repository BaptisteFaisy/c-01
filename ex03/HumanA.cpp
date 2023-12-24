/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:29:05 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/24 16:12:10 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name1, Weapon weapon1){
	name = name1;
	weapon = weapon1;
}
HumanA::~HumanA(){}

void HumanA::attack(){
	std::cout << name << "attacks with their" << weapon->getType() << std::endl;
}