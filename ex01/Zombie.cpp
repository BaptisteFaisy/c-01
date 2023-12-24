/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:14:34 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/23 11:55:57 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie(){
	std::cout << "Zombie instance '" << this->name << "' destroyed." << std::endl;
}

void Zombie::setname(std::string name1){
	name = name1;
	return ;
}

std::string Zombie::getname(){
	return (name);
}
