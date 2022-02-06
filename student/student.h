#ifndef student_h
#define student_h
#include <vector>
#include <iostream>

using namespace std;

class Student {
  public:
    int age;
    vector<int> numOfDaysForCourseCompletion;
    string studentId;
    string firstName;
    string lastName;
    string emailAddress;
    string degreeProgram;

    Student(int age,vector<int> numOfDaysForCourseCompletion, string studentId, string firstName, string lastName, string emailAddress, string degreeProgram);

    // Getters
    int getAge();
    vector<int> getNumOfDaysForCourseCompletion();
    string getStudentId();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    string getDegreeProgram();

    // Mutators
    void setAge(int age);
    void setNumOfDaysForCourseCompletion(vector<int> days);
    void setStudentId(string sid);
    void setFirstName(string fn);
    void setLastName(string ln);
    void setEmailAddress(string ea);
    void setDegreeProgram(string dp);
    void print(string studentId);
};

#endif