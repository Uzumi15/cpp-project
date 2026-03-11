#include "course.h"
#include <iostream>

Course::Course(int id, std::string name, int maxStudents)
{
    this->id = id;
    this->name = name;
    this->maxStudents = maxStudents;
}

bool Course::addStudent(int studentId)
{
    if (students.size() >= maxStudents)
        return false;

    students.push_back(studentId);
    return true;
}

void Course::printInfo()
{
    std::cout << "Cours ID: " << id << "Name: " << name << "Students: " << students.size() << "/" << maxStudents << std::endl;
}

int Course::getId()
{
    return id;
}
