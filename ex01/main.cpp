/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:02:11 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/23 11:52:31 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
	Zombie *tab;
	int i = 0;
	(void)(ac);
	tab = zombieHorde(atoi(av[1]), av[2]);
	delete[] tab;
	return (0);
}