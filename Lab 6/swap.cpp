#include <iostream>
using std::cin, std::cout;

void get_numbers(int& a, int &b, int& c) {
    cout << "Enter 3 Numbers: ";
    cin >> a >> b >> c;
}

void swap(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int num_1, num_2, num_3;

    get_numbers(num_1, num_2, num_3);
    
    if (num_1 > num_2) {
        swap(num_1, num_3);
    } 
    if (num_1 > num_3) {
        swap(num_1, num_2);
    }
    if (num_2 > num_3) {
        swap(num_2, num_3);
    }
    cout << num_1 << num_2 << num_3;
}
