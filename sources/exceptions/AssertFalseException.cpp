// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AssertFalseException.cpp                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 10:16:26 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 10:16:28 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AssertFalseException.hpp"



AssertFalseException::AssertFalseException(std::string & token) {

	this->msg_ = "Assert Failed : "
				+ token
				+ "\nExecution stopped!";

}

AssertFalseException::~AssertFalseException() throw () {

}

const char* AssertFalseException::what( void ) const throw () {

	return this->msg_.c_str();
}