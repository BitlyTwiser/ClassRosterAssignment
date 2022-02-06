#ifndef roster_h
#define roster_h
#include "../student/student.h"
#include "../degree.h"

class Roster 
{
	public:
	  // Vector of pointers used instead of array of pointers.
		vector<char*> classRosterArray;
		Roster();
		~Roster();
		void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
		void remove(string studentId);
		void printAll();
		void printAverageDaysInCourse(string studentId);
		void printInvalidEmails();
		void printByDegreeProgram(DegreeProgram degreeProgram);
};

#endif