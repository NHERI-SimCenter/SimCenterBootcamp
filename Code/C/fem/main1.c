#include "node.h"
#include "domain.h"
#include "constraint.h"

int main(int argc, char **argv) {
  Domain theDomain;

  theDomain.theNodes = 0;  //initialize the pointers
  domainAddNode(&theDomain, 1, 0.0, 0.0);
  domainAddNode(&theDomain, 2, 0.0, 2.0);
  domainAddNode(&theDomain, 3, 1.0, 1.0);
  
  theDomain.theConstraints = 0;
  domainAddConstraint(&theDomain, 1, 1, 1,1,1);
  domainAddConstraint(&theDomain, 2, 3, 1,0,0);
  
  domainPrint(&theDomain);

  // get and print singular node
  printf("\nsingular node:\n");
  Node *theNode = domainGetNode(&theDomain, 2);
  nodePrint(theNode);

  // get and print constraints
  printf("\nconstraints:\n");
  Constraint *theConstraint = domainGetConstraint(&theDomain, 1);
  constraintPrint(theConstraint);
}
