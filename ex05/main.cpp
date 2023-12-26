/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 20:24:01 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/26 21:06:43 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
	if (ac != 2)
		return (1);
	Harl harl;
	harl.complain(av[1]);
}


int calcul(std::string str)
{
	int i = 0;
	int nbr = 0;
	while (str[i])
	{
		nbr+= str[i] - 0;
		i++;
	}
	return (nbr);
}