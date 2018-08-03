#include <stdio.h>
#include <stdlib.h>
#include "domain.h"
#include "node.h"

void domainPrint(Domain *theDomain) {
  printf("The Nodes:\n");
  domainPrintNodes(theDomain);
  domainPrintConstraint(theDomain);
}

void domainAddNode(Domain *theDomain, int tag, double crd1, double crd2) {
  Node *theNextNode = (Node *)malloc(sizeof(Node));
  nodeSetup(theNextNode, tag, crd1, crd2);

  if (theDomain->theNodes != NULL) {
    	theNextNode->next = theDomain->theNodes;
	
  } else {
  	theNextNode->next = NULL;
  }

  theDomain->theNodes = theNextNode;
}

void domainPrintNodes(Domain *theDomain) {
  Node *theCurrentNode = theDomain->theNodes;
  while (theCurrentNode != NULL) {
    nodePrint(theCurrentNode);
    theCurrentNode = theCurrentNode->next;
  };
}

Node *domainGetNode(Domain *theDomain, int nodeTag) {
  Node *theCurrentNode = theDomain->theNodes;
  while (theCurrentNode != NULL) {
    if (theCurrentNode->tag == nodeTag) {
      return theCurrentNode; //return gets out of the program
    } else {
      theCurrentNode = theCurrentNode->next;
    }
  };
  return NULL;
}


void domainAddConstraint(Domain *theDomain, int tag, int NodeTag, int DOF1, int DOF2, int DOF3) {
  Constraint *theNextConstraint = (Constraint *)malloc(sizeof(Constraint));
  constraintSetup(theNextConstraint, tag, NodeTag, DOF1, DOF2, DOF3);

  if (theDomain->theConstraints != NULL) {
    	theNextConstraint->next = theDomain->theConstraints;
	
  } else {
  	theNextConstraint->next = NULL;
  }

  theDomain->theConstraints = theNextConstraint;
}

void domainPrintConstraint(Domain *theDomain) {
  Constraint *theCurrentConstraint = theDomain->theConstraints;
  while (theCurrentConstraint != NULL) {
    constraintPrint(theCurrentConstraint);
    theCurrentConstraint = theCurrentConstraint->next;
  };
}

Constraint *domainGetConstraint(Domain *theDomain, int constraintTag) {
  Constraint *theCurrentConstraint = theDomain->theConstraints;
  while (theCurrentConstraint != NULL) {
    if (theCurrentConstraint->tag == constraintTag) {
      return theCurrentConstraint; //return gets out of the program
    } else {
      theCurrentConstraint = theCurrentConstraint->next;
    }
  };
  return NULL;
}
