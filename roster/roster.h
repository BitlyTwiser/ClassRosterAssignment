#ifndef roster_h
#define roster_h
#include <vector>
#include "../student/student.h"
#include "../degree.h"

class Roster 
{
	public:
		vector<Student*> classRosterArray;
		void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
		void remove(string studentId);
		void printAll();
		void printAverageDaysInCourse(string studentId);
		void printInvalidEmails();
		void printByDegreeProgram(DegreeProgram degreeProgram);
		void setclassRosterArray();
		void callAddFunctionAndSetData(vector<string> data);

		Roster(){
			setclassRosterArray();
		};
		~Roster(){
			// Remove all elements from classRosterArray on deconstruction.
			for(int i = 0; i< classRosterArray.size();i++){
				delete classRosterArray[i];
			}
		};
};

#endif