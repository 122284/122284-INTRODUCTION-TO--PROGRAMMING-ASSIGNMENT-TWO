#include <iostream>
#include <string>
using namespace std;

int main() {
    string book_type;
    int days_late;
    double fine;

    // Capture book type and number of days late
    cout << "Enter book type (regular, children, reference): ";
    cin >> book_type;
    cout << "Enter number of days late: ";
    cin >> days_late;

    // Calculate fine based on book type and number of days late
    if (book_type == "regular") {
        if (days_late <= 5) fine = days_late * 0.5;
        else if (days_late <= 10) fine = 5 * 0.5 + (days_late - 5) * 1;
        else fine = 5 * 0.5 + 5 * 1 + (days_late - 10) * 2;
    } else if (book_type == "children") {
        if (days_late <= 5) fine = days_late * 0.25;
        else if (days_late <= 10) fine = 5 * 0.25 + (days_late - 5) * 0.5;
        else fine = 5 * 0.25 + 5 * 0.5 + (days_late - 10) * 1;
    } else if (book_type == "reference") {
        fine = days_late * 3;
    } else {
        cout << "Invalid book type" << endl;
        return 1;
    }

    // Print the calculated fine
    cout << "The fine is: " << fine << endl;

    return 0;
}
