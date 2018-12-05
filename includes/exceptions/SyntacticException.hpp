// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SyntacticException.hpp                             :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:36:03 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:36:04 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <exception>
#include <string>

class SyntacticException : std::exception
{
public:

	SyntacticException(size_t, std::string &);
	SyntacticException(const SyntacticException&) = default;
	SyntacticException & operator=(const SyntacticException&) = default;

	~SyntacticException() throw ();

	const char* what() const throw ();


private:

	std::string msg_;


};