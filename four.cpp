#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    // Capture two numbers from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Determine and print the maximum number using switch-case
    switch(num1 > num2) {
        case true:
            cout << "Maximum number is: " << num1 << endl;
            break;
        case false:
            cout << "Maximum number is: " << num2 << endl;
            break;
    }

    return 0;
}
