#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
class Student
{
private:
    int id;
    std::string name;
    std::vector<int> grades;
public:
    Student(int id, std::string name);

    int getId();
    std::string getName();

    void addGrade(int grade);
    double getAverage();
    void printInfo();
};

#endif // STUDENT_H
