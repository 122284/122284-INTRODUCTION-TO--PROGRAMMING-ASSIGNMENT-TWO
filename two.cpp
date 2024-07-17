#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, course;
    int score;

    // Capture student details and score
    cout << "Enter student's full name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter course: ";
    cin >> course;
    cout << "Enter score: ";
    cin >> score;

    // Determine and print grade based on score
    cout << "Name: " << name << ", Course: " << course << ", Grade: ";
    if (score >= 70) {
        cout << "A" << endl;
    } else if (score >= 60) {
        cout << "B" << endl;
    } else if (score >= 50) {
        cout << "C" << endl;
    } else if (score >= 40) {
        cout << "D" << endl;
    } else if (score >= 0) {
        cout << "F" << endl;
    } else {
        cout << "Invalid score" << endl;
    }

    return 0;
}
