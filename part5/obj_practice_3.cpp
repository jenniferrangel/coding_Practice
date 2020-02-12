#include <iostream>
#include <string>
#include <vector>
#include "roster.h"
#include "student.h"
using namespace std;

int main() {
	//Notice we don't have to include any of the other stuff because it's all listed
	//in other files.  Roster and student have both been separated and compiled 
	//separately, so that you can add to their list of available functions 
	//by prototyping them in their .h files, and then adding the function
	//into the .cpp file.

	Roster * directory = new Roster();
	directory->add_Student("Bridget");
	directory->add_Student("Christian"); 
	directory->add_Student("Morgan"); 
	double bridgets_grades[1] = {4.0};
	double christians_grades[4] = {4.0,2.1,3.2,1.0};
	double morgans_grades[3] = {1.2,2.6,3.6};
	directory->grade_Specific_Student(bridgets_grades,0,1);
	directory->grade_Specific_Student(christians_grades,1,4);
	directory->grade_Specific_Student(morgans_grades,2,3);
	directory->list_All_Students();
	for (int i = 0; i < directory->get_Num_Students(); i++) { 
		directory->list_of_students[i]->get_Student_Info();
	}
	delete directory;
	
	//==================================================================
	//==================================================================
	//=======================Problem 1==================================
	//==================================================================
	//==================================================================
	// Add and run any new funciton to roster.  For example, one that
	// lists the GPAs without the names, perhaps for anonymous statistical
	// testing.
	//
	//==================================================================
	//==================================================================
	//=======================Problem 2==================================
	//==================================================================
	//==================================================================
	// Add a new member variable to student called "units taken", defined
	// in student.h  Initialize it to 0 in student.cpp constructor.
	//
	// Have the constructor of student initialize it to 0, and then 
	// every class the student has taken (Grade entered) increment
	// units by 4.  Make roster able to print out the total number
	// of units every student is taking.
	return 0;
}
