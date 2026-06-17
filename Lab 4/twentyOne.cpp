#include <iostream>
#include <ctime>
#include <cstdlib>
using std::cin, std::cout, std::time, std::srand, std::rand;

int playerValue, cpuValue, playerNew;
char hs;
bool running = true;

int main() {
    srand(time(nullptr));
    do {
        playerValue = (rand()%13) + 1;
        cpuValue = (rand()%21) + 1;
        cout << "\nPlayer has: " << playerValue << "\n";

        cout << "Hit or stand? (h/s): ";
        cin >> hs;
        switch (hs) {
            case 'h': {
                playerNew = (rand()%13) + 1;
                cout << "\nHit!\n" << "Player gained: " << playerNew;
                playerValue += playerNew;
                break;
            }
            case 's': {
                cout << "\nStand!";
                break;
            }
            default: {
                cout << "\nInvalid selection, try again";
                break;
            }
        }
        if (hs == 'h' || hs == 's') {
            if (playerValue <= 21 && playerValue > cpuValue) {
                cout << "\nYou had: " << playerValue << "\nCPU had: " << cpuValue;
                cout << "\nYou Win!";
            } else if (playerValue == cpuValue) {
                running = false;
                cout << "\nTie! CPU wins.";
            } else if (playerValue > 21) {
                running = false;
                cout << "\nBust! You loose.";
            } else if (playerValue < cpuValue) {
                running = false;
                cout << "\nCPU had: " << cpuValue << "\nYou had: " << playerValue << "\nCPU wins.";
            }
        }
        cout << "\n\n---New Game---\n";
    } while (running = true);
}