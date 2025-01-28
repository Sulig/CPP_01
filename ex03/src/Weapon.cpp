/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:50:11 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/28 20:06:35 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*		 ## Init and Destroy classes ##		*/
Weapon::Weapon(void)
{
	_type = "default";
	return ;
}
Weapon::Weapon(std::string type)
{
	_type = type;
	return ;
}
Weapon::~Weapon(void) { return ; }
/*	## Init and Destroy END ##	*/

/* Getter and Setter */
const std::string	&Weapon::getType() { return (_type); }
void	Weapon::setType(std::string type) { _type = type; }
/* Getter and Setter END */
