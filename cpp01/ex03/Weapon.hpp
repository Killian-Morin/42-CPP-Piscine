/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorin <kmorin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:38:47 by kmorin            #+#    #+#             */
/*   Updated: 2024/01/09 14:00:38 by kmorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

#ifndef SHOWMSG
# define SHOWMSG 0
#endif //SHOWMSG

#define RESET "\e[0m"
#define RED "\033[31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define MAGENTA "\e[0;35m"
#define CYAN "\e[0;36m"
#define WHITE "\033[37m"

#define REDULINE "\e[4;31m"
#define GREENULINE "\e[4;32m"
#define YELLOWULINE "\e[4;33m"
#define MAGENTAULINE "\e[4;35m"

#define COLOR(text, color) color << text << RESET

class Weapon {

	private:
		std::string	_type;

	public:
		//Constructor/Destructor
		Weapon(std::string type);
		~Weapon(void);

		//Getter/Setter
		const std::string&	getType(void);
		void				setType(std::string newType);
};

#endif //WEAPON_HPP
