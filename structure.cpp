#include <iostream>
using namespace std;
int main() {
  cout << "hello\n";
  // C++ Structures (struct)
  /*
  C++ Structures
  Structures (also called structs) are a way to group several related variables
  into one place. Each variable in the structure is known as a member of the
  structure.
  */

  int myNum;
  string myString;
  string letter[5];
  //    string letter[5]={};

  myNum = 5;
  cout << myNum << "\n";

  myString = "how r u?";
  cout << myString << "\n";

  //    letter[5] = {"A","B","C"};
  letter[0] = {"A"};
  letter[3] = {"C"};
  cout << letter[1] << "\n";
  cout << letter[3] << "\n";

  struct {
    int myNum2;
    string myString2;
    string letter2[5];
  }myStructure1,myStructure2;

  myStructure1.myNum2=5;
  myStructure1.myString2="kemon acho???";
  myStructure1.letter2[1]={"p"};

  cout<<myStructure1.letter2<<"\n";
  cout<<myStructure1.letter2[1]<<"\n";

  myStructure2.myString2="enjoy C++";
  cout<<myStructure2.myString2;

  return 0;
}