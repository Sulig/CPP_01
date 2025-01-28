/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:19:47 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/28 20:03:50 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(void);
		HumanB(std::string name);
		~HumanB();
		void	attack();
		Weapon	getWeapon();
		void	setWeapon(Weapon &weapon);
	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif
