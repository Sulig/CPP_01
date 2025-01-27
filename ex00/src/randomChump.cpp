/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:42:10 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/27 19:37:03 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

/* The memory will be allocated on `Stack`
* so, the memory will be automatically freed.
*/
void randomChump( std::string name )
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}
