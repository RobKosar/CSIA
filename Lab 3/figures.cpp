#include <iostream>

using std::cin, std::cout, std::endl;

int main(){
    // Declare variables
    int figure_size;
    char paint_character;

    // Get user input
    cout << "Enter figure size (integer): ";
    cin >> figure_size;
    cout << "Enter paint character (single character): ";
    cin >> paint_character;

    // Nested loop for first figure
    for (int row = 0; row < figure_size; ++row) {
        for (int column = 0; column < figure_size; ++column) {
            cout << paint_character;
        }
        cout << endl;
    }

    cout << endl;

    // Two nested loops for second figure
    for (int row = 0; row < figure_size; ++row) {
        for (int column = 0; column < row; ++column) {
            cout << ' ';
        }
        cout << paint_character << endl;
    }

    cout << endl;

    for (int row = figure_size-1; row >= 0; --row) {
        for (int column = row; column >0; --column) {
            cout << " ";
        }
        cout << paint_character << endl;
    }

    cout << endl;

    // Nested loop for third figure 
    for (int row = 0; row < figure_size; ++row) {
        cout << paint_character;
        for (int column = 1; column < figure_size - 1; ++column) {
            if (row == 0 || row ==figure_size - 1) {
                cout << paint_character;
            } else {
                cout << ' ';
            }
        }
        cout << paint_character << endl;
    }

    cout << endl;

    // Loop for fourth figure 
    for (int row = 0; row < figure_size; row++) {
        for (int column = 0; column < figure_size; column++) {
            if (column == row || column == figure_size - row - 1) {
                cout << paint_character;
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
}
