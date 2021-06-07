/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:33:37 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/06 16:52:29 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
	public:
		void		getcont(void);
		void		setcont(bool &rr);
		std::string	get_f(void);
		std::string get_l(void);
		std::string get_n(void);

	private:
		std::string f_name;
		std::string	l_name;
		std::string n_name;
		std::string login;
		std::string p_adress;
		std::string email;
		std::string phone;
		std::string birthday;
		std::string favorite_meal;
		std::string under_color;
		std::string darkest;
};

#endif
