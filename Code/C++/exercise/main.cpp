#include <iostream>
using namespace std;

#include "Program.h"
#include "Add2.h"

int main(int argc, char **argv) {
  Program p1;
  Add2 task1(2,3);
  Add2 task2(2,4);
  p1.addTask(&task1);
  p1.addTask(&task2);
  p1.runTasks(cout);

  p1.addTask(&task1);
  p1.runTasks(cout);

  return 0;
}
