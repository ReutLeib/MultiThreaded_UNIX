/*
 * ITask.h
 *
 *  Created on: Aug 22, 2017
 *      Author: pwnz
 */

#ifndef ITASK_H_
#define ITASK_H_


#define RED		"\x1B[31m"
#define GREEN	"\x1B[32m"
#define YELLOW	"\x1B[33m"
#define BLUE	"\x1B[34m"
#define WHITE  	"\x1B[37m"

#include <pthread.h>
#include <exception>
using namespace std;

class ITask {
public:
	virtual ~ITask();
	virtual int execute(void* arg) = 0;
};

#endif /* ITASK_H_ */
