#ifndef TEACHER_H
#define TEACHER_H

#include <string>

class Teacher
{
private:
    int id;
    std::string name;
public:
    Teacher(int id, std::string name);

    int getId();
    std::string getName();
    void printInfo();
};

#endif // TEACHER_H
