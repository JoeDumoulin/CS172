// courseTest.cpp - test the course class.
// compile with g++ courseTest.cpp Course.cpp -std=c++11 -o test
//
#include <iostream>
#include <string>

#include "Course.h"

using namespace std;

void printCourse(const Course c)
{
    cout << "Number of students in "
        << c.getCourseName() << ": "
        << c.getNumberOfStudents() << endl;
    string* students = c.getStudents();
    for (int i = 0; i < c.getNumberOfStudents(); i++)
    {
        cout << students[i] << ", ";
    }
    cout << endl;

}

int main()
{
    // Create some courses
    Course course1("Data structures", 2);
    Course course2("Database Systems", 2);

    // put some students in them
    course1.addStudent("Peter Jones");
    course1.addStudent("Brian Smith");
    course1.addStudent("Anne Kennedy");

    course2.addStudent("Peter Jones");
    course2.addStudent("Steve Smith");
    course2.addStudent("Brian Smith");
    course2.addStudent("Anne Kennedy");

    printCourse(course1);
    
    printCourse(course2);
    
    // copy a course to a new course
    cout << "create a new section of " << course1.getCourseName() << endl;
    Course course3(course1);
    
    printCourse(course3);
    
    cout << "Drop one student from course 3" << endl;
    course3.dropStudent("Anne Kennedy");

    printCourse(course3);
    return 0;
}
