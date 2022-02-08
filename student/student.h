#ifndef student_h
#define student_h
#include <vector>
#include <iostream>
#include "../degree.h"

using namespace std;

class Student {
  public:
    int age;
    vector<int> numOfDaysForCourseCompletion;
    string studentId;
    string firstName;
    string lastName;
    string emailAddress;
    DegreeProgram degreeProgram;

    void print();
    
    // Getters
    int getAge();
    vector<int> getNumOfDaysForCourseCompletion();
    string getStudentId();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    DegreeProgram getDegreeProgram();

    // Mutators
    void setAge(int age);
    void setNumOfDaysForCourseCompletion(vector<int> days);
    void setStudentId(string sid);
    void setFirstName(string fn);
    void setLastName(string ln);
    void setEmailAddress(string ea);
    void setDegreeProgram(DegreeProgram dp);

    Student(
      int age, 
      vector<int> numOfDaysForCourseCompletion, 
      string studentId, 
      string firstName, 
      string lastName, 
      string emailAddress, 
      DegreeProgram degreeProgram){
        setAge(age);
        setNumOfDaysForCourseCompletion(numOfDaysForCourseCompletion);
        setStudentId(studentId);
        setFirstName(firstName);
        setLastName(lastName);
        setEmailAddress(emailAddress);
        setDegreeProgram(degreeProgram);
      };
};
#endif