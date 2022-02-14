#include <iostream>
​
using namespace std;
​
class Student {
    string name;
    string semester;
    int roll;
    string section;
    int marks[5], total_marks = 0;
​
public:
    void input() {
        cout << "Enter student name: ";
        cin >> name;
​
        cout << "Enter student semester: ";
        cin >> semester;
​
        cout << "Enter student roll: ";
        cin >> roll;
​
        cout << "Enter student section: ";
        cin >> section;
​
        cout << "Enter marks in five subjects: ";
        for (int i = 0; i < 5; ++i) {
            cin >> marks[i];
            total_marks += marks[i];
        }
    }
​
    void display() {
        cout << "Student Information" << endl;
        cout << "Name: " << name << endl;
        cout << "Semester: " << semester << endl;
        cout << "Roll: " << roll << endl;
        cout << "Section: " << section << endl;
        cout << "Total Marks: " << total_marks << endl;
    }
};
​
int main() {
    Student student1, student2;
​
    cout << "Enter first student information" << endl;
    student1.input();
​
    cout << "Enter second student information" << endl;
    student2.input();
​
    student1.display();
    student2.display();
​
    return 0;
}