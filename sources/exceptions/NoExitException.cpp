// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NoExitException.cpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:49:44 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:49:45 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "NoExitException.hpp"



NoExitException::NoExitException(size_t line) {

	this->msg_ = "Error :\n\tLine "
				+ std::to_string(line)
				+ ": The program doesn’t have an exit instruction.";

}

NoExitException::~NoExitException() throw () {

}

const char* NoExitException::what( void ) const throw () {

	return this->msg_.c_str();
}