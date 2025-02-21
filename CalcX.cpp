#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "CalcX : A Simple and Lightweight Calculator. Made in C++!" << endl;
    cout << endl;
    cout << "Select a Mathematical Operation : " << std::endl;
    cout << std::endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exponents (x^y)" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. Cube Root" << endl;
    cout << "8. Approximate / Rounding" << endl;
    cout << "9. Heron's Formula" << endl;
    cout << "10. Simple Interest" << endl;
    cout << "11. Compound Interest" << endl;
    cout << "12. Exit Program" << endl;
    cout << endl;
    while (true) {
        int ch;
        cout << "Enter choice [ 1 - 12 ] : ";
        cin >> ch;
        cout << endl;
        switch(ch) {
            case 1 : {
                double x, y;
                cout << "Enter first number : ";
                cin >> x;
                cout << "Enter second number : ";
                cin >> y;
                cout << x << " + " << y << " = " << (x + y) << endl;
                break;
            } // Addition
            case 2 : {
                double x, y;
                cout << "Enter first number : ";
                cin >> x;
                cout << "Enter second number : ";
                cin >> y;
                cout << x << " - " << y << " = " << (x - y) << endl;
                break;
            } // Subtraction
            case 3 : {
                double x, y;
                cout << "Enter first number : ";
                cin >> x;
                cout << "Enter second number : ";
                cin >> y;
                cout << x << " * " << y << " = " << (x * y) << endl;
                break;
            } // Multiplication
            case 4 : {
                double x, y;
                cout << "Enter first number : ";
                cin >> x;
                cout << "Enter second number : ";
                cin >> y;
                cout << x << " / " << y << " = " << (x / y) << endl;
                break;
            } // Division
            case 5 : {
                double x, y;
                cout << "Enter first number : ";
                cin >> x;
                cout << "Enter second number : ";
                cin >> y;
                cout << x << " ^ " << y << " = " << (pow(x,y)) << endl;
                break;
            } // Exponents
            case 6 : {
                double x;
                cout << "Enter a number : ";
                cin >> x;
                cout << "Root x = " << sqrt(x) << endl;
                break;
            } // Square Root
            case 7 : {
                double x;
                cout << "Enter a number : ";
                cin >> x;
                cout << "C. Root x = " << cbrt(x) << endl;
                break;
            } // Cube Root
            case 8 : {
                double x;
                cout << "Enter a number : ";
                cin >> x;
                cout << "Approximate x = " << round(x) << endl;
                break;
            } // Approximate / Rounding
            case 9 : {
                cout << "NOTE: Some Calculations may print 0.0 depending on the values!" << std::endl;
                cout << std::endl;
                double a, b, c;
                cout << "Enter the first side [a] : ";
                cin >> a;
                cout << "Enter the second side [b] : ";
                cin >> b;
                cout << "Enter third side [c] : ";
                cin >> c;
                double s = a + b + c;
                cout << "Perimeter = " << s << endl;
                s /= 2;
                cout << "s = " << s << endl;
                double ar = sqrt(s * (s - a) * (s - b) * (s - c));
                cout << "Area = " << ar << endl; 
                break;
            } // Heron's Formula
            case 10 : {
                double p, r, t;
                cout << "Enter the Principal : ";
                cin >> p;
                cout << "Enter the Rate [ as a percentage, ex : 10 for 10% ] : ";
                cin >> r;
                cout << "Enter the Time [ Years ] : ";
                cin >> t;
                double si = (p * r * t) / 100;
                cout << "Simple Interest = " << si << endl;
                cout << "Amount = " << (si + p) << endl; 
                break;
            } // Simple Interest
            case 11 : {
                cout << "Compound Interest Calculation" << endl;
                cout << endl;
                double p, r, n, t;
                cout << "Enter the Principal : ";
                cin >> p;
                cout << "Enter the Rate [ as a percentage, ex : 10 for 10% ] : ";
                cin >> r;
                cout << "Enter the number of times interest is compounded per year: ";
                cin >> n;
                cout << "Enter the Time [ Years ] : ";
                cin >> t;
                double a = p * pow((1 + r / (100 * n)), n * t);
                double ci = a - p;
                cout << "Compound Interest = " << ci << endl;
                cout << "Amount = " << a << endl;
                break;
            } // Compound Interest
            case 12 : {
                cout << "Exiting Program..." << endl;
                exit(0);
                break;
            } // Exit Program [ Choice ]
            default : {
                cout << "Please enter a Valid Input! Restarting the Program..." << endl;
                continue;
            } // Invalid Choice
        } // end of switch
        char next_calc; // Checks for Another Calc.
        cout << "Do you want to do another calculation? [y/n] : ";
        cin >> next_calc;
        if (next_calc == 'n' || next_calc == 'N') {
            break;
        } // Exits Loop
    } // end of loop    
} // end of main