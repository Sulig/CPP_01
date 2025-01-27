/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:40:14 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/27 20:00:01 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

/* The memory will be allocated on `Heap`
* and the caller is responsible for freeing it.
* 	* bc it returns a pointer to a Zombie object.
*/
Zombie* newZombie(std::string name)
{
	Zombie	*newZombie = new Zombie(name);
	return (newZombie);
}
