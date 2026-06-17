#include <iostream>
#include <cmath>
using std::cin, std::cout, std::abs, std::sqrt, std::floor, std::pow;

int choice;
double num1, num2;
bool running = true;

int main() {
    do {
        cout << "\nChoose from the following:\n";
        cout << "1. absolute value\n2. square root\n3. floor\n4. power\n";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter Number: ";
                cin >> num1;
                cout << "\nResult: " << abs(num1);
                break;
            }
            case 2: {
                cout << "Enter Number: ";
                cin >> num1;
                cout << "\nResult: " << sqrt(num1);
                break; 
            }
            case 3: {
                cout << "Enter Number: ";
                cin >> num1;
                cout << "\nResult: " << floor(num1);
                break;
            }
            case 4: {
                cout << "Enter Base: ";
                cin >> num1;
                cout << "\nEnter Exponent: ";
                cin >> num2;
                cout << "\nResult: " << pow(num1, num2);
            }
            default: {
                break;
            }
        }
    } while (choice > 0 && choice <= 4);
}