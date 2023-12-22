/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:02:11 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/22 18:00:27 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string test;
	std::string input;

	std::cin >> test;
	Zombie *zombie;
	if (test == "0")
	{
		std::cout << "Name :";
		std::cin >> input;
		zombie = newZombie(input);
		std::cout << zombie->getname() << std::endl;
		delete zombie;
	}
	else if (test == "1")
	{
		std::cout << "Name :";
		std::cin >> input;
		randomChump(input);
	}
	return (0);
}