// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Log.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 11:30:16 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 11:30:17 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <string>
#include <fstream>

class Log
{

public:

	Log() = delete;
	Log(const char*);
	Log(const std::string &);
	Log(const Log &) = delete;
	Log & operator=(const Log &) = delete;
	~Log();

	bool	bad() const;
	void	add(const std::string &);

private:

	std::ofstream	file_;
	size_t			record_;

};