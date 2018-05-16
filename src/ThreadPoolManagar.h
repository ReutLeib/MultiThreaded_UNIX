/*
 * ThreadPoolManagar.h
 *
 *  Created on: Aug 22, 2017
 *      Author: pwnz
 */

#ifndef THREADPOOLMANAGAR_H_
#define THREADPOOLMANAGAR_H_
#include <vector>
#include "ITask.h"
#include <exception>


class ThreadPoolManagar {
private:
	vector<pthread_t> threadPool;
public:

	ThreadPoolManagar(){}
	virtual ~ThreadPoolManagar() {threadPool.clear(); }

	inline const void addThread(const pthread_t& thread){
		try {
			threadPool.push_back(thread);
		}
		catch (...) {
			cerr << "Error: threadPool.push_back()" << endl;
		}
	}

	inline const bool isEmpty() const {
		return threadPool.empty();
	}

	inline const vector<pthread_t>& getThreadPool() const {
		return threadPool;
	}

	inline int size() const {
			return threadPool.size();
		}

};

#endif /* THREADPOOLMANAGAR_H_ */
