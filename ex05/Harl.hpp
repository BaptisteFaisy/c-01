/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 20:31:12 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/26 21:01:52 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Harl
{
private :
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public :
	Harl();
	~Harl();
	
	void complain(std::string level);
};

int	calcul(std::string str);

#endif