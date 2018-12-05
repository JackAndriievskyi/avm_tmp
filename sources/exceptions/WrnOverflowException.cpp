// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrnOverflowException.cpp                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:54:57 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:54:58 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "WrnOverflowException.hpp"



WrnOverflowException::WrnOverflowException(size_t line, std::string & token) {

	this->msg_ = "Warning :\n\tLine "
				+ std::to_string(line)
				+ ": Value overflows its Type"
				+ token;

}

WrnOverflowException::~WrnOverflowException() throw () {

}

const char* WrnOverflowException::what( void ) const throw () {

	return this->msg_.c_str();
}