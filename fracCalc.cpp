/*
Names:Youssef Saad Eldeen-Youssef Haysam Sadek
IDs:20230498-20230516
SectioNum:28
CourseName:CS112_T1_A2
*/
#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int denom) : numerator(num), denominator(denom) {
        if (denominator == 0) {
            cerr << "Error: Denominator cannot be zero." << endl;
            exit(1);
        }
        simp();
    }

    void simp() {
        int gcd = findGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    int findGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return abs(a);
    }

    Fraction operator+(const Fraction& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    Fraction operator-(const Fraction& other) const {
        int num = numerator * other.denominator - other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    Fraction operator*(const Fraction& other) const {
        int num = numerator * other.numerator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    Fraction operator/(const Fraction& other) const {
        if (other.numerator == 0) {
            cerr << "Error: Division by zero." << endl;
            exit(1);
        }
        int num = numerator * other.denominator;
        int denom = denominator * other.numerator;
        return Fraction(num, denom);
    }

    string toString() const {
        stringstream ss;
        ss << numerator;
        if (denominator != 1) {
            ss << "/" << denominator;
        }
        return ss.str();
    }
};

int main() {
    cout << "==================";
    cout << "=====FracCalc=====";
    cout << "==================";

    cout<< "What do you want to do\n"
            "1-Do an Operation\n"
            "2-Exit\n";
    int choice;
    cin >>choice;
    switch (choice)
    {
    case 1:{
         char operat;

    // cout << "Enter operator (+, -, *, /): ";
    // cin>> operat ;

    int num1, denom1, num2, denom2;
    char slash; // To discard the '/' character
    cout << "Enter your operation: ";
    cin >> num1 >> slash >> denom1 >>operat>>  num2 >> slash >> denom2;
    // cout << "Enter the second fraction : ";
    // cin >> num2 >> slash >> denom2;
    

    Fraction fraction1(num1, denom1);
    Fraction fraction2(num2, denom2);




    switch(operat) {
        case '+':
            cout << "the Addition: "<< (fraction1 + fraction2).toString() << endl;
            break;
        case '-':
            cout << "the Division: " << (fraction1 - fraction2).toString() << endl;
            break;
        case '*':
            cout << "the Multiplication: " << (fraction1 * fraction2).toString() << endl;
            break;
        case '/':
                cout << "the Division: " << (fraction1 / fraction2).toString() << endl;
            break;
        default:
            cout << "Error: Invalid operator" << endl;
    
    }
    break;
    }
    case 2:{
        cout<<"See You!";
        break;
    }
        
    
    }        
    // char operat;

    // // cout << "Enter operator (+, -, *, /): ";
    // // cin>> operat ;

    // int num1, denom1, num2, denom2;
    // char slash; // To discard the '/' character
    // cout << "Enter your operation: ";
    // cin >> num1 >> slash >> denom1 >>operat>>  num2 >> slash >> denom2;
    // // cout << "Enter the second fraction : ";
    // // cin >> num2 >> slash >> denom2;
    

    // Fraction fraction1(num1, denom1);
    // Fraction fraction2(num2, denom2);




    // switch(operat) {
    //     case '+':
    //         cout << "the Addition: "<< (fraction1 + fraction2).toString() << endl;
    //         break;
    //     case '-':
    //         cout << "the Division: " << (fraction1 - fraction2).toString() << endl;
    //         break;
    //     case '*':
    //         cout << "the Multiplication: " << (fraction1 * fraction2).toString() << endl;
    //         break;
    //     case '/':
    //             cout << "the Division: " << (fraction1 / fraction2).toString() << endl;
    //         break;
    //     default:
    //         cout << "Error: Invalid operator" << endl;
    // }

    return 0;
}


    
    