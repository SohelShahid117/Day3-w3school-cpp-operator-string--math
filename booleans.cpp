#include <iostream>
using namespace std;

int main()
{
    cout << "hello\n";
    // https://www.w3schools.com/cpp/cpp_booleans.asp
    /*
    C++ Booleans,Boolean Expressions,Boolean Examples

     */

    bool isCodingFun = true;
    bool isCodeCopyGood = false;
    cout << isCodingFun << "\n";
    cout << isCodeCopyGood << "\n";

    int x = 99;
    int y = 1;
    cout << (x < y) << "\n";
    cout << (x != y) << "\n";

    int myAge = 35;
    int votingAge = 18;
    cout << (myAge > votingAge) << "\n";

    if (myAge > votingAge)
    {
        cout << "u r eligible for voot\n";
    }
    else
    {
        cout << "u r not permitted to voot\n";
    }

    return 0;
}
/*

*/