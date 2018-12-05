// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cheker.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/15 11:10:11 by yandriie          #+#    #+#             //
//   Updated: 2018/11/15 11:10:11 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <istream>
#include <string>

class Cheker {

public:

	Cheker() = delete;

	void	check(std::istream &, bool stdin);

private:

	void	checkInstruction(const std::string &, size_t);
	void	checkType(const std::string &, size_t);
	void	checkComment(const std::string &, size_t);

	bool	finCheck();

	static bool		exit_;
	static bool		eoi_;
	static bool		stdin_;
	static bool		iarg_;
	static bool		instchecked_;
	static bool		typechecked_;
	static bool		commchecked_;
}