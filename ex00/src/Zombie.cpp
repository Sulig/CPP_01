/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:38:41 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/27 19:05:33 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

/*		 ## Init and Destroy classes ##		*/
Zombie::Zombie(void)
{
	_name = "Zombie";
	return ;
}
Zombie::Zombie(std::string name)
{
	_name = name;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << _name << ": *Has returned to the grave*" << std::endl;
	return ;
}
/*	## Init and Destroy END ##	*/

void	Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

