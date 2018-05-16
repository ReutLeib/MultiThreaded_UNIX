/*
 * MontaCarlo.h
 *
 *  Created on: Aug 22, 2017
 *      Author: pwnz
 */

#ifndef MONTACARLO_H_
#define MONTACARLO_H_
#include "ITask.h"


class MontaCarlo : public ITask{
public:
	MontaCarlo();
	virtual ~MontaCarlo();

	inline int execute(int arg){
		//implement pi calculation method
		return 0;
	}
};

#endif /* MONTACARLO_H_ */
