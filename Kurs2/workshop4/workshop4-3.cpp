#include <iostream>
#include <string>
using namespace std;

int main ()

{
    int num;               
    double decimalValue;      
    char arr[10];             
    char cppString[50];       
    char line[100];           
    char c;                 

    cout << "Enter two integers and a decimal number, separated by spaces: ";
    cin >> num >> decimalValue;


    cout << num << " " << decimalValue << endl;

    cout << num << endl;
    cout << decimalValue << endl;

    return 0;
}