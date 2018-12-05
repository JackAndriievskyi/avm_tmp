// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrnExitException.cpp                               :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:53:31 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:54:20 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "WrnExitException.hpp"



WrnExitException::WrnExitException(size_t line) {

	this->msg_ = "Warning:\n\tLine "
				+ std::to_string(line)
				+ ": Insturction exit is not at the end of programm.\n\tAll instructions after insturction exit will be ignored.";

}

WrnExitException::~WrnExitException() throw () {

}

const char* WrnExitException::what( void ) const throw () {

	return this->msg_.c_str();
}