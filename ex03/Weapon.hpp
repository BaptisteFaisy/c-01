/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:28:19 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/24 16:09:33 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CPP
#define WEAPON_CPP

#include <iostream>
#include <iomanip>
#include <string>

class Weapon
{
private :
	std::string type;
public :
	Weapon(std::string type1);
	~Weapon();
	std::string getType() const;

	void setType(std::string type1);
};

#endif