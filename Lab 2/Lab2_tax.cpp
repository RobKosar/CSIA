// Evaluates pay for employee based on employee code
// Rob Kosar
// 5/27/2026

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
    char emp_code;
    double paycheck;

    cout << "Enter total earned from paycheck: ";
    cin >> paycheck;

    cout << "Enter Employee Code: ";
    cin >> emp_code;

    double withheld = paycheck;
    double take_home = paycheck;

    switch (emp_code) {
        case 'd':
            withheld *= 0.15;
            take_home *= 0.85;
            break;
        case 'f':
            withheld *= 0.2;
            take_home *= 0.80;
            break;
        case 'h':
            withheld *= 0.6;
            take_home *= 0.4;
            break;
        case 'o':
            withheld *= 0.65;
            take_home *= 0.35;
            break;
        default:
            cout << "Unknown Employee Code: " << emp_code;
            break;
    }

    if (emp_code == 'd' || emp_code == 'f' || emp_code == 'h' || emp_code == 'o') {
        cout << "Employee Earnings: " << paycheck << endl;
        cout << "Employee Code: " << emp_code << endl;
        cout << "Amount to Withhold: " << withheld << endl;
        cout << "Take Home: " << take_home << endl;
    }
}