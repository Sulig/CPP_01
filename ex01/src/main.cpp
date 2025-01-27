/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:38:26 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/27 20:04:37 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

int main()
{
	// Creating a horde of 5 zombies
	Zombie *horde = zombieHorde(5, "Walker");
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Num: " << i + 1 << "-> " << std::endl;
		horde[i].announce();
	}
	delete [] horde;
	std::cout << "Horde has been destroyed" << std::endl;
	return (0);
}
