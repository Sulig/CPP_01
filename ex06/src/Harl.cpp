/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:44:19 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/30 19:50:44 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* Constructor & destructor */
Harl::Harl(void) { return; }
Harl::~Harl() { return; }
/*+-+-+-+--+*/

/* Member functions */
void Harl::debug(void)
{
	std::cout << WHITE << DEBUG << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!";
	std::cout << RESET << std::endl << std::endl;
}
void Harl::info(void)
{
	std::cout << CYAN << INFO << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!";
	std::cout << RESET << std::endl << std::endl;
}
void Harl::warning(void)
{
	std::cout << YELLOW << WARNING << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month.";
	std::cout << RESET << std::endl << std::endl;
}
void Harl::error(void)
{
	std::cout << RED << ERROR << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << RESET << std::endl << std::endl;
}
/* ---+++---+++ */

/* Complain */
void Harl::complain(std::string level)
{
	void		(Harl::*complaints[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int			level_found = 5;

	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			level_found = i;

	switch (level_found)
	{
		case 0: { (this->*complaints[0])(); }
		case 1: { (this->*complaints[1])(); }
		case 2: { (this->*complaints[2])(); }
		case 3: { (this->*complaints[3])(); } break;

		default:
			std::cout << MAGENTA << "";
			std::cout << "[ Probably complaining about insignificant problems ]";
			std::cout << RESET << std::endl << std::endl;
		break;
	}
}
