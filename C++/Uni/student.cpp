#include "student.h"
#include <iostream>

Student::Student(int id, std::string name)
{
    this->id = id;
    this->name = name;
}

int Student::getId()
{
    return id;
}

std::string Student::getName()
{
    return name;
}

void Student::addGrade(int grade)
{
    grades.push_back(grade);
}

double Student::getAverage()
{
    if (grades.empty()) return 0;

    int sum = 0;
    for(int g : grades)
        sum += g;

    return (double)sum / grades.size();
}

void Student::printInfo()
{
    std::cout << "ID: " << id << "Name: " << name << "Average: " << getAverage() << std::endl;
}
