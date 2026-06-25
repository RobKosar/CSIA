#include <iostream>
#include <ctime>
#include <cstdlib>
using std::cin, std::cout, std::time, std::srand, std::rand;


void assign(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = -1;
    }
}

bool check(int array[], int size, int to_check) {
    for (int i = 0; i < size; i++) {
        if (array[i] == to_check){
            return true;
        }
    }
    return false;
}

void draw(int array[], int size) {
    int temp;
    bool dupe;
    for (int i = 0; i < size; i++) {
        dupe = true;
        do {
            temp = rand()%100;
            if (check(array, size, temp) == false) {
                array[i] = temp;
                dupe = false;
            } 
        } while (dupe == true);
    }
}

void printOut(int num) {
    cout << num << " ";
}

int main() {
    int size = 10;
    int chosen[size] = {0};
    int user_num;
    bool won = false;

    srand(time(nullptr));
    assign(chosen, size);
    draw(chosen, size);

    for (int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> user_num;
        if (check(chosen, size, user_num)) {
            won = true;
        }
    }

    cout << "Lucky Numbers Are:\n";
    for (int i = 0; i < size; i++) {
        printOut(chosen[i]);
    }
    if (won) {
        cout << "Win!";
    } else {
        cout << "No win";
    }
}