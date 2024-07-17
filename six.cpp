#include <iostream>
using namespace std;

int main() {
    int timer;
    cout << "Enter timer (in seconds): ";
    cin >> timer;

    // Determine traffic light color based on timer using switch-case
    switch (timer % 3) {
        case 0:
            cout << "Red light" << endl;
            break;
        case 1:
            cout << "Yellow light" << endl;
            break;
        case 2:
            cout << "Green light" << endl;
            break;
    }

    return 0;
}
