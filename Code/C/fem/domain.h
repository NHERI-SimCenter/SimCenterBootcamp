#include "node.h"
#include "constraint.h"

typedef struct struct_domain {
  Node *theNodes;
  Constraint *theConstraints;

} Domain;

void domainPrint(Domain *theDomain);

void domainAddNode(Domain *theDomain, int tag, double crd1, double crd2);
void domainPrintNodes(Domain *theDomain);
Node *domainGetNode(Domain *, int nodeTag);

void domainAddConstraint(Domain *theDomain, int tag, int NodeTag, int DOF1, int DOF2, int DOF3);
void domainPrintConstraint(Domain *theDomain);
Constraint *domainGetConstraint(Domain *, int constaintTag);

