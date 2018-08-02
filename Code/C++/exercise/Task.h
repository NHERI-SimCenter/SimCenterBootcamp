#ifndef _TASK
#define _TASK

#include <iostream>
#include <queue>
using namespace std;

class Task {
 public:
  Task();
  virtual ~Task();
  int addTask(Task *);
  virtual int runTask(void);
  
  int getIntResult(void);
  double getDoubleResult(void);
  virtual void Print(ostream &s) = 0;

 protected:
  queue<Task *>taskQueue;  // making protected so subclasses can 
                           // take own tasks and either addd int or double res
};

#endif
