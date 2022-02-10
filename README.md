# Application: 
  - The input, which is a student data table was provided by WGU. 
  - The student data table is loaded by the constuctor when instantiating/creating a new isntance of the Roster class object.
  - The constuctor of the Roster object calls setclassRosterVector to parse the studentDataTable and use the instance method "add" to add all of the Student objects (pointers to student objects) to a vector.
  - The remaining portions of the primary functionality of the application is to parse out invalid student addresses, print all details of the student objects inside the vector, remove an element from the vector.

# Build:
  - The files were split up into sub-fodlers to be a little more clean.
  - build command: ```g++ -o classRoster main.cpp roster/* student/*```
