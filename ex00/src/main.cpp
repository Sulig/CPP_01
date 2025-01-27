/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:38:26 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/27 20:00:19 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

int main()
{
	// Call the function `newZombie` with the argument "Zombie"
	std::cout << "Creating a new Zombie, using Heap Memory" << std::endl;
	Zombie	*zombie = newZombie("Zombie");
	zombie->announce();
	delete (zombie);
	// Call the function `randomChump` with the argument "Zombie"
	std::cout << "Creating a new Zombie, using Stack Memory" << std::endl;
	randomChump("Zack");
	return (0);
}
