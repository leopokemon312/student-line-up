#include <iostream>
#include <string>
using namespace std;

int main() {
    int numStudents;

    // Get the number of students and validate it
    do {
        cout << "Enter the number of students (1 - 25): ";
        cin >> numStudents;
        if (numStudents < 1 || numStudents > 25) {
            cout << "Invalid number. Please enter a number between 1 and 25.\n";
        }
    } while (numStudents < 1 || numStudents > 25);

    string name, first, last;

    // Get each student's name and find the alphabetical first and last
    cout << "Enter the names of " << numStudents << " students:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> name;

        // Set the first and last names on the first iteration
        if (i == 0) {
            first = last = name;
        }
        else {
            if (name < first) {
                first = name;
            }
            if (name > last) {
                last = name;
            }
        }
    }

    // Display the results
    cout << "\nThe student at the front of the line: " << first << endl;
    cout << "The student at the end of the line: " << last << endl;

    return 0;
}
