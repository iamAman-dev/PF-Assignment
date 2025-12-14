#include <iostream>
using namespace std;
int main() {
int a = 5, b = 8, temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Program 15: a=" << a << ", b=" << b << endl;
    return 0;
}