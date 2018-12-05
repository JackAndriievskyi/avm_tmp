// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   instInfo.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/15 13:22:55 by yandriie          #+#    #+#             //
//   Updated: 2018/11/15 13:22:56 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "InstInfo.hpp"
#include <string>
#include <vector>



InstructionInfo::InstructionInfo() : instNames_( {"push","pop", "dump", "assert", 
													"add", "sub", "mul", "div", "mod",
													"print", "exit"} )
								   , instArgs_ ( {true, false, false, true,
								   					false, false, false, false, false,
								   					false, false} ) 
								   {

}

InstructionInfo::~InstructionInfo() {

}



const std::string &				InstructionInfo::getInstName(eInstruction & inst) const {

	return instNames_[inst];
}

const bool						InstructionInfo::getInstArgs(eInstruction & inst) const {

	return instArgs_[inst];
}

InstructionInfo::eInstruction	InstructionInfo::getInst(const std::string & instName) const {

	eInstruction	inst = Push;

	while (inst != None)
	{
		if (instName == getInstName(inst))
			return inst;
		inst = static_cast<eInstruction>(static_cast<int>(inst) + 1);
	}

	return inst;
}