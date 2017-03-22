// Course.cpp - implementation of the course class
//
#include "Course.h"

// create a new student array to make room for more records
void Course::reallocateStudentArray()
{
    // reallocate the student array
    int expand = capacity > 10 ? 
        capacity/2 :
        capacity;

    string* newStudents = new string[capacity+expand];

    // copy
    for (int i = 0; i < numberOfStudents; i++)
    {
        newStudents[i] = students[i];
    }

    // clean up
    capacity += expand;
    delete [] students;
    students = newStudents;
}

Course::Course(const string& courseName, int capacity)
{
    numberOfStudents = 0;
    this->courseName = courseName;
    this->capacity = capacity;
    students = new string[capacity];
}

Course::~Course()
{
    delete [] students;
}

string Course::getCourseName() const
{
    return courseName;
}

int Course::getNumberOfStudents() const
{
    return numberOfStudents;
}

string* Course::getStudents() const
{
    return students;
}

void Course::addStudent(const string& name)
{
    if (numberOfStudents == capacity)
    {
        reallocateStudentArray();
    }
    students[numberOfStudents++] = name;
}

void Course::dropStudent(const string& name)
{
    // get the index of the student to drop
    int drop = -1;
    for (int i = 0; i < numberOfStudents; i++)
    {
        if (students[i] == name)
        {
            drop = i;
            break;
        }
    }
    
    // if we didn't find anything, stop here
    if (drop == -1)
        return;
    
    // we will delete and rewrite the student array
    string* newStudents = new string[capacity];
    
    // find the student to drop
    int j = 0;
    for (int i = 0; i < numberOfStudents; i++)
    {
        if (students[i] != name)
        {
            newStudents[j++] = students[i];
        }
    }
    delete [] students;
    students = newStudents;
}

void Course::clear()
{
    delete [] students;
    students  = new string[capacity];
    numberOfStudents = 0;
}

// copy constructor.  This is a deep copy for the Course,
//  so the student array gets copied too.
Course::Course(const Course& c)
{
    courseName = c.courseName;
    numberOfStudents = c.numberOfStudents;
    capacity = c.capacity;
    
    // allocate and copy the students array
    students = new string[capacity];
    for (int i = 0; i < numberOfStudents; i++)
    {
        students[i] = c.students[i];
    }
}


