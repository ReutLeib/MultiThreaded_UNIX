/*
 * TastFeeder.h
 *
 *  Created on: Aug 22, 2017
 *      Author: pwnz
 */

#ifndef TASKFEEDER_H_
#define TASKFEEDER_H_
#include "ITask.h"
#include <queue>

using std::queue;

class TaskFeeder {

private:
	queue<ITask*> tasksList;

public:
	TaskFeeder(){};
	virtual ~TaskFeeder() {}


	inline void addTask(ITask* task){
		try {
			tasksList.push(task);
		}
		catch (...) {
			cerr << "Error: tasksList.push()" << endl;
		}
	}

	inline void removeTask(){
		try {
			tasksList.pop();
		}
		catch (...) {
			cerr << "Error: tasksList.pop()" << endl;
		}
	}

	inline bool isEmpty() const {
		return tasksList.empty();
	}

	inline const queue<ITask*>& getTasksList() const {
		return tasksList;
	}

	inline int size() const {
		return tasksList.size();
	}

};





#endif /* TASTFEEDER_H_ */
