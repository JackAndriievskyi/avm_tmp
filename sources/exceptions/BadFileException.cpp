// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   BadFileException.cpp                               :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 13:01:50 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 13:01:51 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "BadFileException.hpp"



BadFileException::BadFileException(const std::string & msg) {

	this->msg_ = "Error : cannot open\n\tbad file: "
				+ msg;

}

BadFileException::~BadFileException() throw () {

}

const char* BadFileException::what( void ) const throw () {

	return this->msg_.c_str();
}