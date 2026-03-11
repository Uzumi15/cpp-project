#ifndef COURSE_H
#define COURSE_H

#include <vector>
#include <string>

class Course
{
private:
    int id;
    std::string name;
    int maxStudents;
    std::vector<int> students;
public:
    Course(int id, std::string name, int maxStudents);

    bool addStudent(int studentId);
    void printInfo();
    int getId();
};

#endif // COURSE_H
