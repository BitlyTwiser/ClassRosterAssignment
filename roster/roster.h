#ifndef roster_h
#define roster_h
#include <vector>
#include "../student/student.h"
#include "../degree.h"

class Roster 
{
	public:
		vector<Student*> classRosterVector;
		void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
		void remove(string studentId);
		void printAll();
		void printAverageDaysInCourse(string studentId);
		void printInvalidEmails();
		void printByDegreeProgram(DegreeProgram degreeProgram);
		void setclassRosterVector();
		void callAddFunctionAndSetData(vector<string> data);

		Roster(){
			setclassRosterVector();
		};
		~Roster(){
			// Remove all elements from classRosterVector on deconstruction.
			for(int i = 0; i< classRosterVector.size();i++){
				delete classRosterVector[i];
			}
		};
};

#endif