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

  cout << "Printing all student data:" << endl;
  classRoster.printAll();

  cout << "\nPrinting Invalid Student Emails:" << endl;
  classRoster.printInvalidEmails();

  cout << "\nPrinting average days spent in course per student: \n" << endl;
  for (int i = 0; i<classRoster.classRosterVector.size();i++){
    Student* curStudent = classRoster.classRosterVector[i];
    cout << "Student: " << curStudent->getFirstName() << " " << curStudent->getLastName() << endl;
    classRoster.printAverageDaysInCourse(curStudent->getStudentId());
  }

  cout << "\nPrinting student info for degree program SOFTWARE:" << endl;
  classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);

  classRoster.remove("A3");

  cout << "\nPrinting all student data after removing a student:" << endl;
  classRoster.printAll();
  classRoster.remove("A3");

  return 1;
}