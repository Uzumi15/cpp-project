#include "teacher.h"
#include <iostream>

Teacher::Teacher(int id, std::string name)
{
    this->id = id;
    this->name = name;
}

int Teacher::getId()
{
    return id;
}

std::string Teacher::getName()
{
    return name;
}

void Teacher::printInfo()
{
    std::cout << "Teacher ID: " << id << "Name: " << name << std::endl;
}
