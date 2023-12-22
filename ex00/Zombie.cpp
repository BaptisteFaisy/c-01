/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:14:34 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/22 18:08:02 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie(){
	std::string output;
	output = getname();
	std::cout << "Destructeur :" << output << std::endl;
	return ;
}

void Zombie::setname(std::string name1){
	name = name1;
	return ;
}

std::string Zombie::getname(){
	return (name);
}
