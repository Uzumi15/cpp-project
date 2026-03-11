#include <iostream>
#include "university.h"

using namespace std;

int main()
{
    University uni;
    int choice;

    while(true)
    {
        cout << "\n1. Add student" << endl;
        cout << "2. add teacher" << endl;
        cout << "3. Create course" << endl;
        cout << "4. Enroll student" << endl;
        cout << "5. Show students" << endl;
        cout << "6. Show course" << endl;
        cout << "7. exit" << endl;

        cin >> choice;

        if (choice == 1)
        {
            int id;
            string name;

            cout << "ID: ";
            cin >> id;

            cout << "Name: ";
            cin >> name;

            uni.addStudent(id, name);
        }
        else if (choice == 2)
        {
            int id;
            std::string name;

            std::cout << "ID: ";
            std::cin >> id;

            std::cout << "Name: ";
            std::cin >> name;

            uni.addTeacher(id, name);
        }

        else if (choice == 3)
        {
            int id, max;
            string name;

            cout << "Course ID: ";
            cin >> id;

            cout << "Course Name: ";
            cin >> name;

            cout << "Max Student: ";
            cin>> max;

            uni.addCourse(id, name, max);
        }

        else if (choice == 4)
        {
            int studentId, courseId;

            cout << "Student ID: ";
            cin >> studentId;

            cout << "Course ID: ";
            cin >> courseId;

            uni.enrollStudent(studentId, courseId);
        }

        else if (choice == 5)
            uni.showStudents();

        else if (choice == 6)
            uni.showCourses();

        else if (choice == 7)
            break;
    }
    return 0;
}
