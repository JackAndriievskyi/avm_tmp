// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   typeInfo.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/15 13:22:46 by yandriie          #+#    #+#             //
//   Updated: 2018/11/15 13:22:47 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "TypeInfo.hpp"
#include <vector>
#include <string>



TypeInfo::TypeInfo() : typeNames_( {"int8", "int16", "int32", "float", "double"} )
					 , typeSizes_( {sizeof(char), sizeof(short), sizeof(int), sizeof(float), sizeof(double)} )
					 {

}

TypeInfo::~TypeInfo() {

}



const std::string &				TypeInfo::getTypeName(eOperandType & type) const {

	return typeNames_[type];
}

const unsigned int				TypeInfo::getTypeSize(eOperandType & type) const {

	return typeSizes_[type];
}

TypeInfo::eOperandType 			TypeInfo::getType(const std::string & typeName) const {

	eOperandType type = Int8;

	while (type != None)
	{
		if (typeName == getTypeName(type))
			return type;
		type = static_cast<eOperandType>(static_cast<int>(type) + 1);
	}

	return type;
}