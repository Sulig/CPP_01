/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 19:56:14 by sadoming          #+#    #+#             */
/*   Updated: 2025/02/04 18:56:17 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

Zombie	*zombieHorde(unsigned long long n, std::string name)
{
	Zombie *horde = new Zombie[n];
	for (unsigned long long i = 0; i < n; i++)
		horde[i].setName(name);
	return (horde);
}
