/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:28:57 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/26 14:36:19 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
#define HUMANB_CPP


#include <iostream>
#include <iomanip>
#include <string>
#include "Weapon.hpp"


class HumanB
{
private :
	Weapon *weapon;
	std::string name;
public :
	HumanB(std::string name1);
	~HumanB();
	
	void setWeapon(Weapon &weapon1);
	void attack();

};

#endif