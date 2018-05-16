all: MTDemo.o 
	g++ MTDemo.o -o MTDemo
MultiThreadingDemo: MTDemo.cpp
	g++ -c MTDemo.cpp -o MTDemo.o
MontaCarlo: MontaCarlo.h
	g++ -c MontaCarlo.h -o MontaCarlo.o
ITask: ITask.h
	g++ -c ITask.h -o ITask.o
ThreadPoolManagar: ThreadPoolManagar.h
	g++ -c ThreadPoolManagar.h -o ThreadPoolManagar.o
TaskFeeder: TaskFeeder.h
	g++ -c TaskFeeder.h -o TaskFeeder.o
clean:
	rm -rf MTDemo.o MontaCarlo.o ITask.o TaskFeeder.o ThreadPoolManagar.o
