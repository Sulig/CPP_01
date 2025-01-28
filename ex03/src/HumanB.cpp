/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:51:06 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/28 20:06:18 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/* HumanB CLASS:
	* Just exist without a weapon.
	* Can attack with a weapon.
	* Can change the weapon at any time.

	* Attributes:
		* _name: a string.
		* _weapon: a pointer to a `Weapon` object.

	** Note: You can create an instance of `HumanB` without a `Weapon` object.
*/

/*		 ## Init and Destroy classes ##		*/
HumanB::HumanB(void)
{
	_name = "HumanB";
	return ;
}
HumanB::HumanB(std::string name)
{
	_name = name;
	return ;
}
HumanB::~HumanB() { return ; }
/*	## Init and Destroy END ##	*/

/* Getter and Setter for weapon */
Weapon	HumanB::getWeapon()
{
	Weapon	noWeapon;

	noWeapon.setType("no weapon");
	if (_weapon == NULL)
		return (noWeapon);
	return (*_weapon);
}
void	HumanB::setWeapon(Weapon &weapon) { _weapon = &weapon; }

/* Action */
void	HumanB::attack()
{
	if (_weapon == NULL)
	{
		std::cout << _name << " has no weapon" << std::endl;
		return ;
	}
	else
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
