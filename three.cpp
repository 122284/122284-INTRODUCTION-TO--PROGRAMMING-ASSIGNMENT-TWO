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

    // Determine and print grade based on score using switch-case
    cout << "Name: " << name << ", Course: " << course << ", Grade: ";
    switch(score / 10) {
        case 10:
        case 9:
        case 8:
        case 7:
            cout << "A" << endl;
            break;
        case 6:
            cout << "B" << endl;
            break;
        case 5:
            cout << "C" << endl;
            break;
        case 4:
            cout << "D" << endl;
            break;
        default:
            if (score < 40 && score >= 0) {
                cout << "F" << endl;
            } else {
                cout << "Invalid score" << endl;
            }
            break;
    }

    return 0;
}
