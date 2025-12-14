#include <iostream>
using namespace std;
int main() {
 float f;
    cout << "Enter temperature (in Fahrenheit): ";
    cin >> f;
    float c = (5.0 / 9) * (f - 32);
    cout << "Program 8: Celsius = " << c << endl;
    return 0;
}