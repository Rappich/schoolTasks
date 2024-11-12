#include <iostream>
#include <string>
using namespace std;

int main ()

{
    int num = 9;
    double decimalValue = 1.6;
    char  arr[] = "Awesome!";
    string cppString1 = "Cool.";
    string cppString2 = cppString1 + " Beans.";

    cout << num << " " << decimalValue << " " << arr << " " << cppString2;

       cout << num << endl;
    cout << decimalValue << endl;
    cout << arr << endl;
    cout << cppString1 << endl;
    cout << cppString2 << endl;

    return 0;
}