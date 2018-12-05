// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrnOverflowException.hpp                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:54:57 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:54:58 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <exception>
#include <string>

class WrnOverflowException : std::exception
{
public:

	WrnOverflowException(size_t, std::string &);
	WrnOverflowException(const WrnOverflowException&) = default;
	WrnOverflowException & operator=(const WrnOverflowException&) = default;

	~WrnOverflowException() throw ();

	const char* what() const throw ();


private:

	std::string msg_;


};