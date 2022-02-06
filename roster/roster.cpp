#include "roster.h"
#include "../student/student.h"

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {};

void Roster::remove(string studentId) {

};

void Roster::printAll() {

};

void Roster::printAverageDaysInCourse(string studentId) {

};

void Roster::printInvalidEmails() {

};

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {

};

void Roster::setclassRosterVector(){
  const string studentData[] = {
    "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", 
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
    "A5,Joshua,Groeschl,jgroesc@wgu.edu.com,27,7,7,30,SOFTWARE"
    };

  Student student();
};