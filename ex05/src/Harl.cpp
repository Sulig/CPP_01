/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:44:19 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/30 19:20:51 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* Constructor & destructor */
Harl::Harl(void) { return; }
Harl::~Harl() { return; }
/*+-+-+-+--+*/

/* Member functions */
void Harl::debug(void)		{ std::cout << WHITE << DEBUG << RESET << std::endl;	}
void Harl::info(void)		{ std::cout << CYAN << INFO << RESET << std::endl;		}
void Harl::warning(void)	{ std::cout << YELLOW << WARNING << RESET << std::endl;	}
void Harl::error(void)		{ std::cout << RED << ERROR << RESET << std::endl;		}
/* ---+++---+++ */

/* Complain */
void Harl::complain(std::string level)
{
	void		(Harl::*complaints[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			(this->*complaints[i])();
}
