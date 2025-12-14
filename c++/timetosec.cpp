#include<iostream>
using namespace std;
int main() {

 int h, m, s;
    cout << "Enter hours: ";
    cin >> h;
    cout << "Enter minutes: ";
    cin >> m;
    cout << "Enter seconds: ";
    cin >> s;

    cout << "Program 27: Seconds = " << h * 3600 + m * 60 + s << endl;
    return 0;
}