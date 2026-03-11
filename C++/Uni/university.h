#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <vector>
#include "student.h"
#include "teacher.h"
#include "course.h"

class University
{
private:
    std::vector<Student> students;
    std::vector<Teacher> teachers;
    std::vector<Course> courses;

public:

    void addStudent(int id, std::string name);
    void addTeacher(int id, std::string name);
    void addCourse(int id, std::string name, int maxStudents);

    Student* findStudent(int id);
    Course* findCourse(int id);

    void enrollStudent(int studentId, int courseId);

    void showStudents();
    void showCourses();
};

#endif
