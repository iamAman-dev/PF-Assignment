#include <iostream>
using namespace std;
int main() {
int a = 1, b = 2, c = 5, d = 8;
    int max = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    cout << "Program 9: The Maximum number is: " << max << endl;
return 0;
}