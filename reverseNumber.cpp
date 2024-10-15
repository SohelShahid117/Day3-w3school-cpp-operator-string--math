#include <iostream>
using namespace std;
int main()
{

    // https://www.w3schools.com/cpp/cpp_while_loop_reallife.asp
    cout << "hello\n";
    // int number = 15654;
    int number = 15600;
    // int number = 78945;
    // int number = 78;
    int reverseNumber = 0;
    int count = 0;
    while (number)
    {
        int x = number / 10;
        int y = number % 10;
        if (x == 0)
        {
            reverseNumber = y + reverseNumber;
        }
        else
        {
            reverseNumber = (y + reverseNumber) * 10;
        }
        number = x;
        count++;
        cout << "count = " << count << "\n";
    }
    cout << "reverse number = " << reverseNumber;

    return 0;
}