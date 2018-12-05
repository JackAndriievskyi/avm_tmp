// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ModuloArgsException.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:49:13 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:49:14 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ModuloArgsException.hpp"



ModuloArgsException::ModuloArgsException(size_t line, std::string & token) {

	this->msg_ = "Error :\n\tLine "
				+ std::to_string(line)
				+ ": invalid operands to binary expression"
				+ token;

}

ModuloArgsException::~ModuloArgsException() throw () {

}

const char* ModuloArgsException::what( void ) const throw () {

	return this->msg_.c_str();
}