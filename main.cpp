#include "roster/roster.h"
#include <iostream>

using namespace std;

void printMyData() {
  string courseTitle = "Course Title: Scripting and Programming - Applications – C867\t";
  string myName = "Student Name: Joshua Groeschl\t";
  string myStudentId = "Student Id: 001133572\t";
  string programmingLanguage = "Programming Language: c++\r\n";

  cout << courseTitle << myName << myStudentId << programmingLanguage << endl;
};

int main() {
  printMyData();

  // Constructor of Roster class object will set classRoster with pointers to each item in the student data table.
  Roster classRoster;

  classRoster.printAll();
  classRoster.printInvalidEmails();

  for (int i = 0; i<classRoster.classRosterVector.size();i++){
    Student* curStudent = classRoster.classRosterVector[i];

    classRoster.printAverageDaysInCourse(curStudent->getStudentId());
    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
    classRoster.remove("A3");
    classRoster.printAll();
    classRoster.remove("A3");
  }

  return 1;
}