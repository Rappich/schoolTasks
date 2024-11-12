#include <iostream>
using namespace std;

int main()

{
    int length, width, area, perimeter;
    
    cout << "What is the lenght of the rectangle?" << endl;
    cin >> length;

    cout << "What is the width of the rectangle" << endl;
    cin >> width;

    area = length * width;
    perimeter = 2*(width + length);

    cout << "The rectangles area is " << area << endl;
    cout << "The rectangles perimeter is " perimeter << endl;

    return 0;
}
