/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 19:56:14 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/28 17:30:38 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

Zombie	*zombieHorde(long n, std::string name)
{
	Zombie *horde = new Zombie[n];
	for (long i = 0; i < n; i++)
		horde[i].setName(name);
	return (horde);
}
