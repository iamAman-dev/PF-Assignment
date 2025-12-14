#include<iostream>
using namespace std;
int main() {
    const float PI = 3.14159;

    float r;
    cout << "Enter the radius: ";
    cin >> r;
    cout << "Program 23: Area=" << PI * r * r << ", Circum=" << 2 * PI * r << endl;
    return 0;    
}