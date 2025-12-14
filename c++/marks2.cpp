#include<iostream>
using namespace std;
int main() {

 int icp, cag, fe, pf, ap;

    cout << "Enter marks of CAG: ";
    cin >> cag;

    cout << "Enter marks of ICP: ";
    cin >> icp;

    cout << "Enter marks of PF: ";
    cin >> pf;

    cout << "Enter marks of FE: ";
    cin >> fe;

    cout << "Enter marks of AP: ";
    cin >> ap;

    int total = ap + fe + cag + icp + pf;
    cout << "Program 24: Total=" << total << ", Average=" << total / 5.0 << endl;
    return 0;
    
}