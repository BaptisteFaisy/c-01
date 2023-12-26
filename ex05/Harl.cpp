/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 20:31:04 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/26 21:05:42 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug( void ){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}
void Harl::info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n";
}
void Harl::warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}
void Harl::error( void ){
	std::cout << "This is unacceptable ! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level){
	int nbr = calcul(level);
	int nbr1 = calcul("DEBUG");
	int nbr2 = calcul("INFO");
	int nbr3 = calcul("WARNING");
	int nbr4 = calcul("ERROR");
	nbr1 == nbr ? debug(): (void)0;
	nbr2 == nbr ? info(): (void)0;
	nbr3 == nbr ? warning(): (void)0;
	nbr4 == nbr ? error(): (void)0;
}