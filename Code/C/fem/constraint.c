#include <stdio.h>
#include "constraint.h"

void constraintPrint(Constraint *theConstraint){
  printf("Constraint No. : %d \n", theConstraint->tag);
  printf("Node No. : %d \n", theConstraint->NodeTag);
  printf("Constraint: %d %d %d \n", theConstraint->DOF[0], theConstraint->DOF[1], theConstraint->DOF[2]);
}

void constraintSetup(Constraint *theConstraint, int tag, int NodeTag, int DOF1, int DOF2, int DOF3) {
  theConstraint->tag = tag;
  theConstraint->NodeTag = NodeTag;
  theConstraint->DOF[0] = DOF1;
  theConstraint->DOF[1] = DOF2;
  theConstraint->DOF[2] = DOF3;
  theConstraint->next = NULL;
}
