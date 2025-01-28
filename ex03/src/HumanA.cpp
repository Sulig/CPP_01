/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:50:50 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/28 20:06:42 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* HumanA CLASS:
	* Needs to take a `Weapon` object and attacks with it.
	* Will always be armed with the same weapon.

	* Attributes:
		* _name: a string.
		* _weapon: a reference to a `Weapon` object.

	** Note: You will need a `Weapon` object to create an instance of `HumanA`.
*/

/*		 ## Init and Destroy classes ##		*/
HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	_name = name;
	_weapon = weapon;
	return ;
}
HumanA::~HumanA() { return ; }
/*	## Init and Destroy END ##	*/

/* Get weapon */
Weapon	HumanA::getWeapon() { return (_weapon); }

/* Action */
void	HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
