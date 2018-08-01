#include <iostream>
#include <string>
using namespace std;

int main(int argv, char **argc) {
  string pName = argc[0];
  string str;
  cout << "Enter Name: ";
  cin >> str;

  if (pName == "./a.out")
    str += " the lazy sod";

  str += " says ";
  str = str + "HELLO World";
  cout << str << "\n";

  return 0;
}
