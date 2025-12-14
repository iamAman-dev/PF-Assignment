#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159

// 1. Assign values program
void program1() {
    int a = 4, b = 3, c = 2;
    cout << "Program 1: " << a << ", " << b << ", " << c << endl;
}

// 2. Print message program
void program2() {
    cout << "Program 2: C language is a powerful programming language." << endl;
}

// 3. Interchange two variables program
void program3() {
    int a = 3, b = 5, temp;
    temp = a; 
    a = b; 
    b = temp;
    cout << "Program 3: a=" << a << ", b=" << b << endl;
}

// 4. Year → months program
void program4() {
    int year = 19;
    cout << "Program 4: Months = " << year * 12 << endl;
}

// 5. Sum and product program
void program5() {
    int x, y;
    cout << "Enter any two numbers: ";
    cin >> x >> y;
    cout << "Program 5: Sum=" << x + y << endl;
    cout << "Product=" << x * y << endl;
}

// 6. Age in months program
void program6() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Program 6: Age in months = " << age * 12 << endl;
}

// 7. Roll No + 3 subject marks program
void program7() {
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
}

// 8. Fahrenheit to Celsius program
void program8() {
    float f;
    cout << "Enter temperature (in Fahrenheit): ";
    cin >> f;
    float c = (5.0 / 9) * (f - 32);
    cout << "Program 8: Celsius = " << c << endl;
}

// 9. Max of 4 numbers program
void program9() {
    int a = 1, b = 2, c = 5, d = 8;
    int max = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    cout << "Program 9: The Maximum number is: " << max << endl;
}

// 10. Convert miles to km program
void program10() {
    float miles = 2.5;
    cout << "Program 10: Km = " << miles * 1.609 << endl;
}

// 11. Average of 2 ints program
void program11() {
    int a = 5, b = 9;
    cout << "Program 11: Average = " << (a + b) / 2.0 << endl;
}

// 12. Volume of cylinder program
void program12() {
    const float pi = 3.14159;
    float r = 3, h = 5;
    cout << "Program 12: Volume = " << pi * r * r * h << endl;
}

// 13. Area program
void program13() {
    float r = 3;
    cout << "Program 13: Area = " << PI * r * r << endl;
}

// 14. mm to inches program
void program14() {
    float mm = 20;
    cout << "Program 14: Inches = " << mm / 25.4 << endl;
}

// 15. Interchange values program
void program15() {
    int a = 5, b = 8, temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Program 15: a=" << a << ", b=" << b << endl;
}

// 16. a=b=c=3 product program
void program16() {
    int a = 3, b = 3, c = 3;
    cout << "Program 16: Product = " << a * b * c << endl;
}

// 17. Separate integer & fraction part program
void program17() {
    float x = 15.58971;
    int i = int(x);
    float f = x - i;
    cout << "Program 17: Int=" << i << ", Fraction=" << f << endl;
}

// 18. s = vi*t + 1/2 at^2 program
void program18() {
    float vi = 5.0, t = 2.0, a = 3.0;
    float s = vi * t + 0.5 * a * t * t;
    cout << "Program 18: s=" << s << endl;
}

// 19. Age in months and days program
void program19() {
    int age = 12;
    cout << "Program 19: Your age is "<<age<<" and month=" << age * 12 << ", Days=" << age * 365 << endl;
}

// 20. Escape sequence printing program
void program20() {
    cout << "Program 20:\nC:\\Windows>\n'P'\t'A'\t'K'\n\"Pakistan\"\n";
}

// 21. Print pattern with \n in one statement program
void program21() {
    cout << "Program 21:\nXXXXX\nXXXX\nXXX\nXX\nX\n";
}

// 22. Input student details program
void program22() {
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
}

// 23. Circle area & circumference program
void program23() {
    float r;
    cout << "Enter the radius: ";
    cin >> r;
    cout << "Program 23: Area=" << PI * r * r << ", Circum=" << 2 * PI * r << endl;
}

// 24. Total & average of 5 subjects program
void program24() {
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
}

// 25. Area of triangle program (Heron's formula)
void program25() {
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
}

// 26. Rupees to dollars program
void program26() {
    float rs = 12000;
    cout << "Program 26: Dollars = " << rs / 60 << endl;
}

// 27. Convert time to seconds program
void program27() {
    int h, m, s;
    cout << "Enter hours: ";
    cin >> h;
    cout << "Enter minutes: ";
    cin >> m;
    cout << "Enter seconds: ";
    cin >> s;

    cout << "Program 27: Seconds = " << h * 3600 + m * 60 + s << endl;
}

// 28. disc program
void program28() {
    int a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;

    cout << "Program 28: disc = " << b * b - 4 * a * c << endl;
}

// 29. If n > 100 program
void program29() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    if (n > 100)
        cout << "Program 29: n is greater than 100" << endl;
}

// 30. Odd or even program
void program30() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "Program 30: Even\n";
    else
        cout << "Program 30: Odd\n";
}

void showMenu() {

        int choice;

        cout << "\n=== MENU ===\n";
        cout<<"01. Program1 \n";
    cout<<"02. Program2 \n";
    cout<<"03. Program3 \n";
    cout<<"04. Program4 \n";
    cout<<"05. Program5 \n";
    cout<<"06. Program6 \n";
    cout<<"07. Program7 \n";
    cout<<"08. Program8 \n";
    cout<<"09. Program9 \n";
    cout<<"10. Program10 \n";
    cout<<"11. Program11 \n";
    cout<<"12. Program12 \n";
    cout<<"13. Program13 \n";
    cout<<"14. Program14 \n";
    cout<<"15. Program15 \n";
    cout<<"16. Program16 \n";
    cout<<"17. Program17 \n";
    cout<<"18. Program18 \n";
    cout<<"19. Program19 \n";
    cout<<"20. Program20 \n";
    cout<<"21. Program21 \n";
    cout<<"22. Program22 \n";
    cout<<"23. Program23 \n";
    cout<<"24. Program24 \n";
    cout<<"25. Program25 \n";
    cout<<"26. Program26 \n";
    cout<<"27. Program27 \n";
    cout<<"28. Program28 \n";
    cout<<"29. Program29 \n";
    cout<<"30. Program30 \n";
    cout<<"----------Exit-----------";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: program1(); break;
            case 2: program2(); break;
            case 3: program3(); break;
            case 4: program4(); break;
            case 5: program5(); break;
            case 6: program6(); break;
            case 7: program7(); break;
            case 8: program8(); break;
            case 9: program9(); break;
            case 10: program10(); break;
            case 11: program11(); break;
            case 12: program12(); break;
            case 13: program13(); break;
            case 14: program14(); break;
            case 15: program15(); break;
            case 16: program16(); break;
            case 17: program17(); break;
            case 18: program18(); break;
            case 19: program19(); break;
            case 20: program20(); break;
            case 21: program21(); break;
            case 22: program22(); break;
            case 23: program23(); break;
            case 24: program24(); break;
            case 25: program25(); break;
            case 26: program26(); break;
            case 27: program27(); break;
            case 28: program28(); break;
            case 29: program29(); break;
            case 30: program30(); break;

            

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }


int main() {
    showMenu();
    return 0;
}
