#include <iostream>
using namespace std;

int main() {
    const int n = 10;
    int marks[n];

    cout << "Enter the marks of " << n << " students:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

   
    int highest = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }
 
    int passCount = 0;
    int failCount = 0;

    for (int i = 0; i < n; i++) {
        if (marks[i] >= 40) {
            passCount++;
        } else {
            failCount++;
        }
    }

    
    cout << "Marks of students are:";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }

    cout << "Number of students passed: " << passCount << endl;
    cout << "Number of students failed: " << failCount << endl;
    cout << "Topper's marks: " << highest << endl;

}