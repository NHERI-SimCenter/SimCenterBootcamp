#include "Task.h"

Task::Task()
{
  taskQueue.empty();
}
Task::~Task()
{
  taskQueue.empty();
}
int 
Task::addTask(Task *theTask)
{
  taskQueue.push(theTask);
  return 0;
}
int 
Task::runTask(void) 
{
  while (!taskQueue.empty()) {
    Task *theTask = taskQueue.front();
    theTask->runTask();
    taskQueue.pop();
  }
  return 0;
}

int 
Task::getIntResult(void)
{
  return 0;
}
double 
Task::getDoubleResult(void)
{
  return 0.0;
}
