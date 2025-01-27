/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:38:41 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/27 19:55:42 by sadoming         ###   ########.fr       */
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

/*		 ## INSTANCES ##		*/
/* The memory will be allocated on `Heap`
* and the caller is responsible for freeing it.
* 	* bc it returns a pointer to a Zombie object.
*/
Zombie* newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name);
	return (newZombie);
}

/* The memory will be allocated on `Stack`
* so, the memory will be automatically freed.
*/
void randomChump( std::string name )
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}
/*	## INSTANCES END ##	*/

