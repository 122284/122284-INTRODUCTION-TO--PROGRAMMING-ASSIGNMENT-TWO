#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string movie_type;
    double ticket_price;

    // Capture age and movie type
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter movie type (regular/3D): ";
    cin >> movie_type;

    // Determine ticket price based on age and movie type
    if (age < 18) {
        // Ticket prices for children
        if (movie_type == "regular") {
            ticket_price = 5;
        } else if (movie_type == "3D") {
            ticket_price = 7;
        } else {
            cout << "Invalid movie type" << endl;
            return 1; // Exit if invalid movie type
        }
    } else {
        // Ticket prices for adults
        if (movie_type == "regular") {
            ticket_price = 10;
        } else if (movie_type == "3D") {
            ticket_price = 12;
        } else {
            cout << "Invalid movie type" << endl;
            return 1; // Exit if
