/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:42:59 by sadoming          #+#    #+#             */
/*   Updated: 2025/01/30 19:24:49 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"
# define RESET		"\033[0m"

# define DEBUG		"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
# define INFO		"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!\n If you did, I wouldn’t be asking for more!"
# define WARNING	"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
# define ERROR		"This is unacceptable! I want to speak to the manager now."

class Harl
{
	public:
		Harl(void);
		~Harl();
		void	complain(std::string level);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};


#endif
