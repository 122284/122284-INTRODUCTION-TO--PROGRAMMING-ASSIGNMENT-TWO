#include <iostream>
using namespace std;

int main() {
    double account_balance = 1000.0; // Example initial balance
    double daily_limit = 500.0; // Example daily withdrawal limit
    double withdrawal_amount;
    double total_withdrawn_today = 0.0; // Example amount withdrawn today

    // Capture withdrawal amount
    cout << "Enter amount to withdraw: ";
    cin >> withdrawal_amount;

    // Check for invalid amount
    if (withdrawal_amount <= 0) {
        cout << "Invalid amount entered." << endl;
    } 
    // Check for insufficient funds
    else if (withdrawal_amount > account_balance) {
        cout << "Insufficient funds." << endl;
    } 
    // Check if withdrawal exceeds daily limit
    else if ((total_withdrawn_today + withdrawal_amount) > daily_limit) {
        cout << "Daily withdrawal limit exceeded." << endl;
    } 
    // Process the withdrawal
    else {
        account_balance -= withdrawal_amount;
        total_withdrawn_today += withdrawal_amount;
        cout << "Withdrawal successful. Remaining balance: $" << account_balance << endl;
    }

    return 0;
}
