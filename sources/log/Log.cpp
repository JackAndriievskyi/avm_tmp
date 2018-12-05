// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Log.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 11:30:16 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 11:30:17 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Log.hpp"



Log::Log(const char* filename) : file_(filename, std::ofstream::out | std::ofstream::trunc)
							   , record_(0) {}

Log::Log(const std::string &filename) : file_(filename, std::ofstream::out | std::ofstream::trunc)
							   , record_(0) {}

Log::~Log() {

	if (!bad())
		file_.close();
}



bool	Log::bad() const {

	if (this->file_.is_open())
		return false;
	return true;

}

void	Log::add(const std::string & str) {

	record_++;
	std::string tmp = std::to_string(record_) + "." + str + "\n\n";

	file_.write(tmp.c_str(), tmp.size());
}