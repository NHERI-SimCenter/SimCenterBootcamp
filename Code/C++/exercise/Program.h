#ifndef _PROGRAM
#define _PROGRAM

#include <iostream>
#include <queue>
using namespace std;

class Task;

class Program {
 public:
  Program();
  ~Program();
  int addTask(Task *);
  int runTasks(ostream &s);
 private:
  queue<Task *>taskQueue;
};

#endif
