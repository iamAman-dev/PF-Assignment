#include<iostream>
#include<cmath>
using namespace std;
int main() {
 double a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;

    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Program 25: Area=" << area << endl;




return 0;
    
}