#include <iostream>
using namespace std;
int main()
{

    // https://www.w3schools.com/cpp/cpp_while_loop_reallife.asp
    cout << "hello\n";
    int number = 152;

    for (int i = 1; i <= number; i++)
    {
        // cout << i << "\n";
        int x = number / 10;
        int y = number % 10;
        number = x;
        cout << "x=" << x << "\n";
        cout << "y=" << y << "\n";
        cout << "number=" << number << "\n";

        int result = y * 10 + number;
        cout << "result = " << result << "\n";
    }

    return 0;
}