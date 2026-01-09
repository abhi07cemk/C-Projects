#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int id;
    string name;
    int age;
    string course;
};

void addStudent() {
    Student s;
    ofstream file("students.txt", ios::app);

    cout << "Enter ID: ";
    cin >> s.id;
    cout << "Enter Name: ";
    cin >> s.name;
    cout << "Enter Age: ";
    cin >> s.age;
    cout << "Enter Course: ";
    cin >> s.course;

    file << s.id << " " << s.name << " " << s.age << " " << s.course << endl;
    file.close();

    cout << "Student added successfully!\n";
}

void displayStudents() {
    Student s;
    ifstream file("students.txt");

    cout << "\nID  Name  Age  Course\n";
    while (file >> s.id >> s.name >> s.age >> s.course) {
        cout << s.id << "   " << s.name << "   " << s.age << "   " << s.course << endl;
    }
    file.close();
}

int main() {
    int choice;
    do {
        cout << "\n1. Add Student\n2. Display Students\n3. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 3);

    return 0;
}
