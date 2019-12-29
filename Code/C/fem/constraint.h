#ifndef _CONSTRAINT  //if no definition for "_CONSTRAINT"
#define _CONSTRAINT
//preventing the compiler from loading it again if multiple reference to this file exists.

#include <stdio.h>

typedef struct constraint {
  int tag;
  int NodeTag;
  int DOF[3];
  struct constraint *next;
} Constraint;

void constraintPrint(Constraint *);
void constraintSetup(Constraint *, int tag, int NodeTag, int DOF1, int DOF2, int DOF3);

#endif
