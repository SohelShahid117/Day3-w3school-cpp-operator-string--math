#include <iostream>
using namespace std;
int main()
{
    // C++ While Loop,Do/While Loop,While Loop Examples
    cout << "hello\n";

    /*
        syntax:
            while (condition) {
                // code block to be executed
            }
    */

    int i = 0;
    while (i < 5)
    {
        cout << "i=" << i << "\n";
        i++;
    }

    /*
    syntax:
    do {
        // code block to be executed
    }
    while (condition);
    */

    int j = 0;
    do
    {
        cout << "j=" << j << "\n";
    } while (j > 5);

    int k = 0;
    do
    {
        cout << "k=" << k << "\n";
        k++;
    } while (k < 5);

    int countDown = 3;
    while (countDown > 0)
    {
        cout << countDown << "\n";
        countDown--;
    }
    cout << "happy birthday to u!!!\n";

    int p = 1;
    while (p <= 10)
    {
        if (p % 2 == 0)
        {

            cout << "even=" << p << "\n";
        }
        p++;
    }

    // reversNumber
    int number = 123;

    return 0;
}

/*
1.Do not forget to increase the variable used in the condition, otherwise the loop will never end!
*/