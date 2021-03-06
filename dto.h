#ifndef DTO_H_INCLUDED
#define DTO_H_INCLUDED
#include "../globals.h"
using namespace std;

class Student {
public:
    unsigned id;
    string firstName;
    string lastName;
    string birthdate;
    string email;
    char gender;
    string jmbg;
    unsigned departmentId;
};

class Teacher {
public:
    unsigned id;
    string firstName;
    string lastName;
    string birthdate;
    string email;
    char gender;
    string jmbg;
    string title;
    unsigned departmentId;
};

class Subject {
public:
    unsigned id;
    string name;
    int ects;
    string abbreviation;
};

class Department {
public:
    unsigned id;
    string name;
};

class SubjectTeacher {
public:
    unsigned subjectId;
    unsigned teacherId;
};

class StudentSubjectTeacher {
public:
    unsigned studentId;
    unsigned subjectId;
    unsigned teacherId;
};

class DepartmentSubject {
public:
    unsigned departmentId;
    unsigned subjectId;
};

#endif // DTO_H_INCLUDED

