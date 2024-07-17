#include <iostream>
using namespace std;

int main() {
    double purchase_amount, discount, total_cost;
    cout << "Enter purchase amount: ";
    cin >> purchase_amount;

    // Determine discount based on purchase amount
    if (purchase_amount >= 500) {
        discount = 0.2;
    } else if (purchase_amount >= 200) {
        discount = 0.1;
    } else if (purchase_amount >= 100) {
        discount = 0.05;
    } else {
        discount = 0;
    }

    // Calculate total cost after applying discount
    total_cost = purchase_amount - (purchase_amount * discount);
    cout << "Total cost after discount: " << total_cost << endl;

    return 0;
}
