#pragma once
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

    Student(int age,vector<int> numOfDaysForCourseCompletion, string studentId, string firstName, string lastName, string emailAddress, string degreeProgram) {
      age = age;
      numOfDaysForCourseCompletion = numOfDaysForCourseCompletion;
      studentId = studentId;
      firstName = firstName;
      lastName = lastName;
      emailAddress = emailAddress;
      degreeProgram = degreeProgram;
    };

    // Getters
    int getAge() {
      return age;
    };

    vector<int> getNumOfDaysForCourseCompletion() {
      return numOfDaysForCourseCompletion;
    };

    string getStudentId() {
      return studentId;
    };

    string getFirstName() {
      return firstName;
    };

    string getLastName() {
      return lastName;
    };

    string getEmailAddress() {
      return emailAddress;
    };

    string getDegreeProgram() {
      return degreeProgram;
    };

    // Mutators
    int setAge(int age) {
      age = age;
    };

    vector<int> setNumOfDaysForCourseCompletion(vector<int> days) {
      numOfDaysForCourseCompletion = days;
    };

    string setStudentId(string sid) {
      studentId = sid;
    };

    string setFirstName(string fn) {
      firstName = fn;
    };

    string setLastName(string ln) {
      lastName = ln;
    };

    string setEmailAddress(string ea) {
      emailAddress = ea;
    };

    string setDegreeProgram(string dp) {
      degreeProgram = dp;
    };

    void print() {

    };

};

#endif