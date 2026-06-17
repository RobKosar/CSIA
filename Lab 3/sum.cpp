#include <iostream>
using std::cin, std::cout, std::endl;

int num;
int sum;

int main() {
    do {
        cout << "Enter Number (0 to stop): ";
        cin >> num;
        if (num != 0 && num > 0) {
            sum += num;
        }
    } while (num != 0);
    cout << "\nThe sum of positive numbers is: " << sum;
}