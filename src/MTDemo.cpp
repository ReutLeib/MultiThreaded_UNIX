//============================================================================
// Name        : MTDemo.cpp
// Author      : ShayRubach (305687352) & ReutLeib (302764576)
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Multi Threading Demo
//============================================================================

#include <iostream>
#include <pthread.h>
#include <stdlib.h>
#include <vector>
#include "MontaCarlo.h"
#include "TaskFeeder.h"
#include "ThreadPoolManagar.h"

using namespace std;
const extern int MAXTHREADS = 1;
const extern int ITERATIONS = 2;

void validateArgs(int argc,char** argv);

int main(int argc,char** argv) {

	int maxThreads,iterationRatio;
	TaskFeeder taskFeeder;
	ThreadPoolManagar threadPoolManager;

	validateArgs(argc,argv);
	maxThreads = atoi(argv[MAXTHREADS]);
	iterationRatio = atoi(argv[ITERATIONS]);



	return 0;
}











void validateArgs(int argc,char** argv){
	if(argc != 3){
		cout << "You " RED "MUST" WHITE " provide 2 arguments: "
				GREEN "{Maximum threads}" WHITE ","
				GREEN " {Maximum iterations per thread}" WHITE << endl;
		exit(-1);
	}
	cout << "Maximum  threads: " YELLOW << argv[1] << WHITE << endl;
	cout << "Iterations ratio: " YELLOW << argv[2] << WHITE << endl;
}
