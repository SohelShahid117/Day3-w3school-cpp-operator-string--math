#include <iostream>
#include <vector>
using namespace std;
int main()
{

    /*
    C++ Arrays,Arrays and Loops,Omit Array Size,Array Size,Arrays Real-Life Example,C++ Multi-Dimensional Arrays

    */

    //    string cars[5] ={"BMW","TATA","PAJERO","ALION","FORD","MAZDA"}; err due to extra one element
    string cars[5] = {"BMW", "TATA", "PAJERO", "ALION", "FORD"};
    cout << cars[2] << "\n";
    int carQty = sizeof(cars) / sizeof(cars[0]);
    cout << "array element = " << carQty << "\n";
    cars[2] = "VOLVO";
    cout << cars[2].length() << "\n";
    cout << cars[0].size() << "\n";
    for (int i = 0; i < carQty; i++)
    {
        cout << cars[i] << "\n";
    }

    cout << "now apply for-each loop\n";

    for (string car : cars)
    {
        cout << car << "\n";
    }

    // Fixed Size (Arrays) vs. Dynamic Size (Vectors)
    // This is because the size of an array in C++ is fixed, meaning you cannot add or remove elements after it is created.

    cout << "hi\n";
    // cars[6] = "mitsubishi"; // this item not add to the array
    // cout << cars[6];
    cout << "hello\n";

    // Vectors
    // For operations that require adding and removing array elements, C++ provides vectors, which are resizable arrays.

    vector<string> laptop = {"hp", "dell", "asus"};
    for (string pc : laptop)
    {
        cout << pc << "\n";
    }
    // laptop.push_back("lenovo", "apel"); // err due to 2 item add
    laptop.push_back("accer");
    cout << "enjoy c++\n";
    for (string pc : laptop)
    {
        cout << pc << "\n";
    }

    int ages[7] = {44, 55, 48, 12, 35, 6, 77};
    float avg, sum = 0;
    for (int age : ages)
    {
        sum = sum + age;
    }
    cout << "total ages = " << sum << "\n";
    int nmbrOfpeople = sizeof(ages) / sizeof(ages[0]);
    cout << "total people = " << nmbrOfpeople << "\n";
    avg = sum / nmbrOfpeople;
    cout << "avg age is = " << avg << "\n";

    int lowestAge = ages[0];
    for (int age : ages)
    {
        if (age < lowestAge)
        {
            lowestAge = age;
        }
    }
    cout << "lowest age is: " << lowestAge << "\n";

    return 0;
}
/*
1.
*/
