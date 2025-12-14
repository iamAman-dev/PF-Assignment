#include <iostream>
using namespace std;
int main() {
int roll, cg, ic, pf;
    cout << "Enter your roll number: ";
    cin >> roll;

    cout << "Enter your marks in pf: ";
    cin >> pf;

    cout << "Enter your marks in cg: ";
    cin >> cg;

    cout << "Enter your marks in ic: ";
    cin >> ic;

    int total = cg + ic + pf;
    float avg = total / 3.0;

    cout << "Program 7: Total=" << total << endl;
    cout << "Average=" << avg << endl;
    return 0;
}