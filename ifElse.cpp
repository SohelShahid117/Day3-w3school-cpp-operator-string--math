#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{

    /*
    C++ If ... Else,Else,Else If,Short Hand If Else,if ... Else Examples
    */
    cout << "hi\n";

    int x = 22;
    int y = 3;
    if (x > y)
    {
        cout << "x is greater than y\n";
        cout << x << " is greater than " << y << "\n";
    }

    int time;
    time = 16;
    if (time <= 10)
    {
        cout << "good morning\n";
    }
    else if (time <= 14)
    {
        cout << "good noon\n";
    }
    else if (time <= 17)
    {
        cout << "good afternoon\n";
    }
    else if (time <= 19)
    {
        cout << "good evening\n";
    }
    else
    {
        cout << "good night\n";
    }

    string result = (time < 18) ? "good day" : "good evening";
    cout << result << "\n";

    int doorCode = 12337;
    if (doorCode == 123337)
    {
        cout << "correct code.\nnow door open\n";
    }
    else
    {
        cout << "wrong code.\ndoor not open\n";
    }

    int myNum;
    myNum = -22;
    if (myNum > 0)
    {
        cout << "positive number\n";
    }
    else if (myNum < 0)
    {
        cout << "negative number\n";
    }
    else
    {
        cout << "number is 0";
    }

    return 0;
}