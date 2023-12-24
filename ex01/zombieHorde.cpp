/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 11:12:16 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/23 11:56:27 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie *tab = new Zombie[N];
	int i = 0;
	while (i != N)
	{
		tab[i].setname(name);
		std::cout << tab[i].getname() << std::endl;
		i++;
	}
	return (tab);
}