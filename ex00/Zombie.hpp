/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:08:33 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/22 18:01:19 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Zombie
{
private :
	std::string name;
public :
	Zombie();
	~Zombie();

	void setname(std::string name1);

	std::string getname();

	void announce(void);

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif