// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrnUnderflowException.cpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:55:30 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:55:31 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "WrnUnderflowException.hpp"



WrnUnderflowException::WrnUnderflowException(size_t line, std::string & token) {

	this->msg_ = "Error :\n\tLine "
				+ std::to_string(line)
				+ ": Value underflows its Type"
				+ token;

}

WrnUnderflowException::~WrnUnderflowException() throw () {

}

const char* WrnUnderflowException::what( void ) const throw () {

	return this->msg_.c_str();
}