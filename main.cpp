#include "roster/roster.h"
#include "degree.h"
#include <iostream>

using namespace std;

void main() {
  Roster roster;

  roster.printAll();
  roster.printInvalidEmails();

  //Loop through array and print out other things
  for (char *i: roster.classRosterArray){
    cout << *i << endl;
    roster.printAverageDaysInCourse(i);
    roster.printByDegreeProgram(DegreeProgram::SOFTWARE);
    roster.remove("A3");
    roster.printAll();
    roster.remove("A3");
  //expected: the above line should print a message saying such a student with this ID was not found.
  }
}