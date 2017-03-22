// Course.h - prototype for a class to represent a Course
//
#ifndef COURSE_H_
#define COURSE_H_
#include <string>

using namespace std;

class Course
{
    public:
        Course(const string& courseName, int capacity);
        Course(const Course& c);
        ~Course();
        string getCourseName() const;
        void addStudent(const string& name);
        void dropStudent(const string& name);
        void clear();
        string* getStudents() const;
        int getNumberOfStudents() const;
    private:
        string courseName;
        string* students;
        int numberOfStudents;
        int capacity;

        void reallocateStudentArray();
};

#endif // COURSE_H_
