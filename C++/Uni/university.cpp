#include "university.h"
#include <iostream>

void University::addStudent(int id, std::string name)
{
    students.push_back(Student(id, name));
}

void University::addTeacher(int id, std::string name)
{
    teachers.push_back(Teacher(id, name));
}

void University::addCourse(int id, std::string name, int maxStudents)
{
    courses.push_back(Course(id, name, maxStudents));
}

Student* University::findStudent(int id)
{
    for (auto &s:students)
        if(s.getId() == id)
            return &s;

    return nullptr;
}

Course* University::findCourse(int id)
{
    for(auto &c:courses)
        if(c.getId() == id)
            return &c;

    return nullptr;
}

void University::enrollStudent(int studentId, int courseId)
{
    Course* c = findCourse(courseId);

    if (!c)
    {
        std::cout << "Course not found\n";
        return;
    }

    if(!c->addStudent(studentId))
    {
        std::cout << "Cours is full\n";
    }
}

void University::showStudents()
{
    for(auto &s: students)
        s.printInfo();
}

void University::showCourses()
{
    for(auto &c:courses)
        c.printInfo();
}
