#include<iostream>
using namespace std;
int main() {
string name;
    int age;
    float height;
    char gender;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height: ";
    cin >> height;

    cout << "Enter your gender (M/F): ";
    cin >> gender;

    cout << "Program 22: " << name << ", " << age << ", " << height << ", " << gender << endl;
    return 0;
}