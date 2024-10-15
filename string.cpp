#include<iostream>
#include<string>
using namespace std;

int main(){
    /*
    C++ Strings,String Concatenation,Numbers and Strings,String Length,Access Strings,Special Characters,User Input Strings,string namespace(using namespace std; or std::),C-Style Strings
    */

    cout<<"hello"<<"\n";

    string a = "enjoy c++ string.";
    cout<<a<<"\n";

    string firstName = "Abdullah";
    string lastName = "Aadil";
    // string fullName = firstName + " " + lastName;
    string fullName = firstName + ' ' + lastName;
    cout<<fullName<<"\n";

    string fullName2 = firstName.append(lastName);
    cout<<"fullName2 = "<<fullName2<<"\n";
    cout<<"after using append() function firstName = "<<firstName<<"\n";
    cout<<"append() is very very very bad!!! coz firstName = fullName2\n";

    int x1 = 10;
    int y1 = 20;
    cout<<x1+y1<<"\n";

    string x2 = "10";
    string y2 = "20";
    cout<<x2+y2<<"\n";

    // cout<<x1+y2<<"\n"; err due to type difference
    // cout<<x2+y1<<"\n";  err due to type difference

    cout<<"the length of fullName is: "<<fullName.length()<<"\n";
    // cout<<"the length of fullName2 is : "<<fullName2.length()<<"\n";
    // cout<<"the length of fullName2 is : "<<fullName2.size()<<"\n";

    cout<<firstName[0]<<"\n";
    cout<<firstName[10]<<"\n";
    cout<<firstName[firstName.size()]<<"\n";
    cout<<firstName[firstName.size()-1]<<"\n";
    cout<<"firstName = "<<firstName<<"\n";
    cout<<firstName.size()<<"\n";
    cout<<fullName.size()<<"\n";
    cout<<"fullName = " <<fullName<<"\n";

    string myString = "how r u ???";
    string myString2 = "how r u ???";
    cout<<myString[myString.length()-1]<<"\n";
    cout<<myString[myString2.size()-1]<<"\n";

    // myString2[0] = "k"; // err disse coz here use "" in a charecter
    myString2[0] = 'k';
    cout<<myString2<<"\n";
    // cout<<myString2.at[0]<<"\n"; //err coz here use square bracket
    cout<<myString2.at(0)<<"\n";
    myString2.at(0) = 'j';
    cout<<myString2<<"\n";

    // cout<<"i love "C++" "<<"\n"; //err
    cout<<"i love \"C++\" "<<"\n";
    cout<<"i \tlove \"C++\" "<<"\n";
    cout<<"i \'love\' \"C++\" "<<"\n";

    cout<<"the \ charecter is called backslash"<<"\n"; //not print /
    cout<<"the / charecter is called slash"<<"\n"; 
    cout<<"the \\ charecter is called backslash"<<"\n"; 

    string babarNam;
    cout<<"enter your babar nam:"<<"\n";
    // cin>>babarNam;
    //akane cin babarnamer prothom part t nibe.complete nite hole getline() use korte hobe
    getline(cin,babarNam);
    cout<<"babar nam holo : "<<babarNam<<"\n";


    string greetinggg = "hello jan"; //in c++ style
    char greeting2[] = "hello jan.kmn acho"; //in c style
    // char greeting2[] = 'hello jan.kmn acho'; //err coz ''
    cout<<greetinggg<<"\n";
    cout<<greeting2<<"\n";



    return 0;
}

/*
1.A string variable contains a collection of characters surrounded by double quotes:
2.A string in C++ is actually an object, which contain functions that can perform certain operations on strings.
3.To get the length of a string, use the length() function:
3.To get the length of a string, use the size() function:

4.don't use append() to concatenate string.
5.when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second: instead of cin>>
--->getline(cin,variableName);

*/