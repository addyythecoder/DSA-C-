#include <iostream>
#include <vector>
using namespace std;


class Student {
public:
    int id;
    string name;

   
    Student(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};


int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n=== Student Management ===\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Remove Student by ID\n";
        cout << "4. Search Student by ID\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        int id;
        string name;
        int found = 0;

        switch (choice) {
            case 1:
                cout << "Enter ID: ";
                cin >> id;
                cout << "Enter Name: ";
                cin.ignore(); // clear newline
                getline(cin, name);
                students.push_back(Student(id, name));
                cout << "Student added.\n";
                break;
            case 2:
                if (students.empty()) {
                    cout << "No students to display.\n";
                } else {
                    cout << "All Students:\n";
                    for (int i = 0; i < students.size(); i++) {
                        students[i].display();
                    }
                }
                break;
            case 3:
                cout << "Enter ID to remove: ";
                cin >> id;
                found = 0;
                for (int i = 0; i < students.size(); i++) {
                    if (students[i].id == id) {
                        students.erase(students.begin() + i);
                        cout << "Student removed.\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                cout << "Student not found.\n";
}
break;
            case 4:
                cout << "Enter ID to search: ";
                cin >> id;
                found = 0;
                for (int i = 0; i < students.size(); i++) {
                    if (students[i].id == id) {
                        cout << "Student found:\n";
                        students[i].display();
                        found = 1;
                        break;
                    }
                }
                if (!found)
{
cout << "Student not found.\n";
}
break;
            case 5:
                cout << "Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}

