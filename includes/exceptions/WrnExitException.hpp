// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrnExitException.hpp                               :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:53:31 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:54:20 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <exception>
#include <string>

class WrnExitException : std::exception
{
public:

	WrnExitException(size_t);
	WrnExitException(const WrnExitException&) = default;
	WrnExitException & operator=(const WrnExitException&) = default;

	~WrnExitException() throw ();

	const char* what() const throw ();


private:

	std::string msg_;


};