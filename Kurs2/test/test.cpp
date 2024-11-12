#include <iostream>
using namespace std;

int main() {
    int length, width, area, perimeter;

    cout << "What is the length of the rectangle?" << endl;
    cin >> length;  // Correct input statement

    cout << "What is the width of the rectangle?" << endl;
    cin >> width;   // Correct input statement

    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Output the results
    cout << "The rectangle's area is " << area << endl;
    cout << "The rectangle's perimeter is " << perimeter << endl;  // Fixed output statement

    return 0;
}