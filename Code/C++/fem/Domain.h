#ifndef _DOMAIN
#define _DOMAIN

#include "Domain.h"

#include <map>

class Node;

using namespace std;

class Domain {
 public:
  Domain();
  ~Domain();

  Node *getNode(int tag);
  void Print(ostream &s);
  int AddNode(Node *theNode);

 private:
  map<int, Node *>theNodes;
};

#endif
