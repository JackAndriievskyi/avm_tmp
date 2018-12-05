// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TypeInfo.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/15 13:12:09 by yandriie          #+#    #+#             //
//   Updated: 2018/11/15 13:12:10 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <string>
#include <vector>



class TypeInfo {

public:

	TypeInfo();
	TypeInfo(const TypeInfo &) = delete;
	TypeInfo & operator=(const TypeInfo &) = delete;
	~TypeInfo();

	enum eOperandType
	{
		Int8 = 0,
		Int16,
		Int32,
		Float,
		Double,
		None
	};

	const std::string &		getTypeName(eOperandType &) const;
	const unsigned int		getTypeSize(eOperandType &) const;
	eOperandType			getType(const std::string &) const;

private:

	const std::vector<const std::string>	typeNames_;
	const std::vector<const unsigned int>	typeSizes_;
};

