#include "student.h"
#include <string> 

using namespace std;

// Getters
int Student::getAge() {
  return Student::age;
};

vector<int> Student::getNumOfDaysForCourseCompletion() {
  return Student::numOfDaysForCourseCompletion;
};

string Student::getStudentId() {
  return Student::studentId;
};

string Student::getFirstName() {
  return Student::firstName;
};

string Student::getLastName() {
  return Student::lastName;
};

string Student::getEmailAddress() {
  return Student::emailAddress;
};

DegreeProgram Student::getDegreeProgram() {
  return Student::degreeProgram;
};

// Mutators
void Student::setAge(int age) {
  Student::age = age;
};

void Student::setNumOfDaysForCourseCompletion(vector<int> days) {
  Student::numOfDaysForCourseCompletion = days;
};

void Student::setStudentId(string sid) {
  Student::studentId = sid;
};

void Student::setFirstName(string fn) {
  Student::firstName = fn;
};

void Student::setLastName(string ln) {
  Student::lastName = ln;
};

void Student::setEmailAddress(string ea) {
  Student::emailAddress = ea;
};

void Student::setDegreeProgram(DegreeProgram dp) {
  Student::degreeProgram = dp;
};

//Helper method
string returnNumberOfDaysAsAsString(vector<int> numOfDays){
  string numberOfDaysArray = "";

  for(int i=0;i<numOfDays.size();i++){
    numberOfDaysArray.append(to_string(numOfDays.at(i)));
  }

  return numberOfDaysArray;
}

void Student::print() {
  cout << "Student Id: " << Student::getStudentId() << "\t" << "First Name: " << Student::getFirstName() << "\t" << "Last Name: " << Student::getLastName() << "\t" << "Email: " << Student::getEmailAddress() << "Age: " << "\t" << Student::getAge() << "daysInCourse: " << returnNumberOfDaysAsAsString(Student::getNumOfDaysForCourseCompletion()) << "\t" << "Degree Program: " << Student::getDegreeProgram() << endl;
};