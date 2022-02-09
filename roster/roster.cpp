#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iostream>
#include <cstring>  
#include "roster.h"
#include "../student/student.h"
#include <regex>

//Helper methods
bool invalidEmailAddress(string emailAddress){
  if(regex_match(emailAddress, regex("((^.*\\s.*))|(^(?:(?!@).)*$)|(^(?:(?!\\.).)*$)"))){
    return true;
  }
  
  return false;
};

vector<int> convertNumOfDaysToVectorOfInts(int numDays1, int numDays2, int numDays3 ){
  vector<int> returnVector;
  returnVector.insert(returnVector.end(), { numDays1, numDays2, numDays3 });

  return returnVector;
};

// End helpers

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
  Roster::classRosterVector.push_back(new Student(
    age,
    convertNumOfDaysToVectorOfInts(daysInCourse1, daysInCourse2, daysInCourse3),
    studentID,
    firstName,
    lastName,
    emailAddress,
    degreeprogram
  ));
};

void Roster::remove(string studentId) {
  
};

void Roster::printAll() {
  for(int i = 0;i<classRosterVector.size();i++){
      classRosterVector[i]->print();
  }
};

void Roster::printAverageDaysInCourse(string studentId) {
  vector<Student*>::iterator it = find_if(classRosterVector.begin(), classRosterVector.end(), [studentId](Student* student){ return (student->getStudentId() == studentId); });
  cout << (*it)->getStudentId() << endl;
};

void Roster::printInvalidEmails() {
    for(int i = 0;i<classRosterVector.size();i++){
      string emailAddress = classRosterVector[i]->getEmailAddress();
      if(invalidEmailAddress(emailAddress)){
        cout << "Invalid Email Address: " << emailAddress << endl;
      }
  }
};

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {

};

DegreeProgram returnDegreeProgram(string degreeProgram){
  if(degreeProgram == "SECURITY") {
    return DegreeProgram::SECURITY;
  } else if (degreeProgram == "NETWORK") {
    return DegreeProgram::NETWORK;
  } else {
    return DegreeProgram::SOFTWARE;
  }
};

void Roster::callAddFunctionAndSetData(vector<string> data){
  string studentId = data.at(0);
  string firstName = data.at(1);
  string lastName = data.at(2);
  string emailAddress = data.at(3);
  int age = stoi(data.at(4));
  int daysInCourse1 = stoi(data.at(5));
  int daysInCourse2 = stoi(data.at(6));
  int daysInCourse3 = stoi(data.at(7));
  DegreeProgram degreeProgram = returnDegreeProgram(data.at(8));
  
  Roster::add(studentId, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
};

void Roster::setclassRosterVector(){
  const string studentData[] = {
    "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", 
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
    "A5,Joshua,Groeschl,jgroesc@wgu.edu.com,27,7,7,30,SOFTWARE"
    };    

    for (string student : studentData){
      vector<string> innerTokens;

      stringstream sstr(student);      
      while(sstr.good())
      {
          string substr;
          getline(sstr, substr, ',');
          innerTokens.push_back(substr);
      }
      callAddFunctionAndSetData(innerTokens);
    }
};

