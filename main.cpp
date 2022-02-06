#include "roster/roster.cpp"
#include <iostream>

using namespace std;

void printMyData() {
  string courseTitle = "Course Title: Scripting and Programming - Applications – C867\t";
  string myName = "Student Name: Joshua Groeschl\t";
  string myStudentId = "Student Id: 001133572\t";
  string programmingLanguage = "Programming Language: c++";

  cout << courseTitle << myName << myStudentId << programmingLanguage << endl;
};

int main() {
  Roster roster;

  printMyData();

  roster.printAll();
  roster.printInvalidEmails();

  for (int i; i<roster.classRosterVector.size();i++){
    //Do things
  }

  // //Loop through array and print out other things
  // for (char *i: roster.classRosterVector){
  //   cout << *i << endl;
  //   roster.printAverageDaysInCourse(i);
  //   roster.printByDegreeProgram(DegreeProgram::SOFTWARE);
  //   roster.remove("A3");
  //   roster.printAll();
  //   roster.remove("A3");
  // //expected: the above line should print a message saying such a student with this ID was not found.
  // }

  return 1;
}