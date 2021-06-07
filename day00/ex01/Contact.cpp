/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 15:10:39 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/06 16:42:33 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
 
 void    Contact::setcont(bool &rr)
 {
     std::cout << "	first name: ";
     rr = !!std::getline(std::cin, this->f_name);
     std::cout << ((rr == true) ? "	last name: " : "");
     rr = !!std::getline(std::cin, this->l_name);
     std::cout << ((rr == true) ? "	nickname: " : "");
     rr = !!std::getline(std::cin, this->n_name);
     std::cout << ((rr == true) ? "	login: " : "");
     rr = !!std::getline(std::cin, this->login);
     std::cout << ((rr == true) ? "	postal address: " : "");
     rr = !!std::getline(std::cin, this->p_adress);
     std::cout << ((rr == true) ? "	email address: " : "");
     rr = !! std::getline(std::cin, this->email);
     std::cout << ((rr == true) ? "	phone number: " : "");
     rr = !! std::getline(std::cin, this->phone);
     std::cout << ((rr == true) ? "	birthday date: " : "");
     rr = !! std::getline(std::cin, this->birthday);
     std::cout << ((rr == true) ? "	favorite meal: " : "");
     rr = !! std::getline(std::cin, this->favorite_meal);
     std::cout << ((rr == true) ? "	underwear color: " : "");
     rr = !!std::getline(std::cin, this->under_color);
     std::cout << ((rr == true) ? "	darkest secret: " : "");
     rr = !!std::getline(std::cin, this->darkest);
 }
 
 void    Contact::getcont(void)
 {
     std::cout << "	first name: " << this->f_name << std::endl;
     std::cout << "	last name: " << this->l_name << std::endl;
     std::cout << "	nickname: " << this->n_name << std::endl;
     std::cout << "	login: " << this->login << std::endl;
     std::cout << "	postal address: " << this->p_adress << std::endl;
     std::cout << "	email address: " << this->email << std::endl;
     std::cout << "	phone number: " << this->phone << std::endl;
     std::cout << "	birthday date: " << this->birthday << std::endl;
     std::cout << "	favorite meal: " << this->favorite_meal << std::endl;
     std::cout << "	underwear color: " << this->under_color << std::endl;
     std::cout << "	darkest secret: " << this->darkest << std::endl;
 }
 
 std::string Contact::get_f(void)
 {
     return this->f_name;
 }
 
 std::string Contact::get_l(void)
 {
     return this->l_name;
 }
 
 std::string Contact::get_n(void)
 {
     return this->n_name;
 }
