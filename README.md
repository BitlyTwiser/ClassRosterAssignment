# Application: 
  - The student data table is loaded by the constuctor when instantiating a new instance of the Roster class object.
  - The constuctor of the Roster object calls setClassRosterArray to parse the studentDataTable and use the instance method "add" to add all of the Student objects (pointers to student objects) to a vector.

# Build:
  - The files were split up into sub-fodlers to be a little more clean.
  - build command: ```g++ -o classRoster main.cpp roster/* student/*```

# Notes:
  - I did seperate the files roster.h, roster.cpp, student.h, student.cpp into respective folders just for a smidge of cleanliness. I do hope thats ok! :)
  - My brain likes the degree of seperation, I hope I did not overstep my bounds in doing so!
