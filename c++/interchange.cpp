#include <iostream>
using namespace std;
int main() {
  int a = 3, b = 5, temp;
    temp = a; 
    a = b; 
    b = temp;
    cout << "Program 3: a=" << a << ", b=" << b << endl;
    return 0;
}