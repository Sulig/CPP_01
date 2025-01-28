/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:06:33 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/28 20:06:25 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon();
		const std::string	&getType();
		void				setType(std::string type);
	private:
		std::string	_type;
};

#endif
