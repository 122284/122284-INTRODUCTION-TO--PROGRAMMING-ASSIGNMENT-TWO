#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    double balance;
    string crb_status;
    int months_as_customer;

    // Capture customer details
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter bank balance: ";
    cin >> balance;
    cout << "Enter CRB status (good/bad): ";
    cin >> crb_status;
    cout << "Enter number of months as customer: ";
    cin >> months_as_customer;

    // Check loan qualification criteria
    if (age > 22 && balance > 50000 && crb_status == "good" && months_as_customer > 6) {
        cout << "Customer is qualified for a loan." << endl;
    } else {
        cout << "Customer is not qualified for a loan." << endl;
    }

    return 0;
}
