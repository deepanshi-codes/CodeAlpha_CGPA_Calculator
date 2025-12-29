#include <iostream>
using namespace std;

int main() {
    int n;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "Enter number of courses: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        float credits;
        string grade;
        int gradePoint = 0;

        cout << "\nCourse " << i << endl;
        cout << "Enter credit hours: ";
        cin >> credits;

        cout << "Enter grade (A+, A, B+, B, C, D, F): ";
        cin >> grade;

        if (grade == "A+") gradePoint = 10;
        else if (grade == "A") gradePoint = 9;
        else if (grade == "B+") gradePoint = 8;
        else if (grade == "B") gradePoint = 7;
        else if (grade == "C") gradePoint = 6;
        else if (grade == "D") gradePoint = 5;
        else gradePoint = 0;

        totalCredits += credits;
        totalGradePoints += gradePoint * credits;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\nTotal Credits: " << totalCredits;
    cout << "\nFinal CGPA: " << cgpa << endl;

    return 0;
}
