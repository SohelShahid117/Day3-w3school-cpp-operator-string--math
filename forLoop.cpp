#include <iostream>
using namespace std;
int main()
{
    // C++ For Loop,Nested Loops,For Loop Examples,Break and Continue

    cout << "hello\n";

    /*syntax for-Each loop:

    for (type variableName : arrayName) {
         // code block to be executed
    }

    */

    int myNumber[7] = {12, 55, 12, 56, 4, 7, 8};
    for (int n : myNumber)
    {
        cout << n << "\n";
    }

    for (int i = 0; i <= 100; i += 10)
    {
        cout << i << "\n";
        if (i >= 55)
        {
            break;
        }
    }

    int number = 5;
    for (int i = 1; i <= 10; i++)
    {
        cout << number << " X " << i << "  = " << number * i << "\n";
    }

    for (int i = 1; i <= 10; i++)
    {
        if (i == 4 || i == 5 || i == 7)
        {
            continue;
        }
        cout << i << "\n";
    }

    int p = 0;
    while (p < 10)
    {
        cout << p << "\n";
        if (p == 4)
        {
            p = p + 3;
        }
        p++;
    }

    return 0;
}
/*
1.When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:

2.There is also a "for-each loop" (also known as ranged-based for loop), which is used exclusively to loop through elements in an array (or other data structures):

3.The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.
*/