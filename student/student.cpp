#include "student.h"

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

string Student::getDegreeProgram() {
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

void Student::setDegreeProgram(string dp) {
  Student::degreeProgram = dp;
};

void print(string studentId) {
  cout << studentId << endl;
};