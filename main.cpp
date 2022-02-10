#include "roster/roster.h"
#include <iostream>

/* Notes:
  I did add a few quick notes to the README.MD.
  I also added a few lines between the output t odeliniate the different parts of the program for easier review. I hope this is acceptable.

  Constructor of Roster class object will execute setclassRosterArray method.
  The method will parse the studentArray and set the classRosterArray with pointers to each Student objects created from the student data table.

  I apprciate whomever it is that takes the time to read this! It was most fun writing the c++ code here, I am open to any feedback! 

  Thank you!
*/

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

  // The Constructor of Roster class (as noted above) object will execute setclassRosterArray method to insert all requested objects into classRosterArray.
  Roster classRoster;

  cout << "Printing all student data:" << endl;
  classRoster.printAll();

  cout << "\nPrinting Invalid Student Emails:" << endl;
  classRoster.printInvalidEmails();

  cout << "\nPrinting average days spent in course per student: \n" << endl;
  for (int i = 0; i<classRoster.classRosterArray.size();i++){
    Student* curStudent = classRoster.classRosterArray[i];
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