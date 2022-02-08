#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <cstring>  
#include <map>
#include "roster.h"
#include "../student/student.h"

//Helper methods
bool invalidEmailAddress(string emailAddress){
  //Parse email string and determine if its missing the @ or the .
  return false;
};

vector<int> convertNumOfDaysToVectorOfInts(int numDays1, int numDays2, int numDays3 ){
  vector<int> returnVector;
  returnVector.insert(returnVector.end(), { numDays1, numDays2, numDays3 });

  return returnVector;
};

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
  
  Student student(
    age,
    convertNumOfDaysToVectorOfInts(daysInCourse1, daysInCourse2, daysInCourse3),
    studentID,
    firstName,
    lastName,
    emailAddress,
    degreeprogram
  );
};

void Roster::remove(string studentId) {

};

void Roster::printAll() {
  for(int i = 0;i<Roster::classRosterVector.size();i++){
    classRosterVector[i]->print();
  }
};

void Roster::printAverageDaysInCourse(string studentId) {

};

void Roster::printInvalidEmails() {
  cout << "Invalid Emails" << endl;

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

void callAddFunctionAndSetData(vector<string> data){
  cout << data.at(0) << endl;
  cout << data.at(1) << endl;
  cout << data.at(2) << endl;
  cout << data.at(3) << endl;
  cout << data.at(4) << endl;
  cout << data.at(5) << endl;
  cout << data.at(6) << endl;
  cout << data.at(7) << endl;
  cout << data.at(8) << endl;
};

void Roster::setclassRosterVector(){
  string delimiter = ",";
  size_t pos = 0;
  string token;

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

