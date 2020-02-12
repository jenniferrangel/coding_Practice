#ifndef _ROSTER_H_INCLUDED_
#define _ROSTER_H_INCLUDED_
#include <iostream>
#include <string>
#include "student.h"
using namespace std;
class Roster { 
	public:
		int num_students;
		Student ** list_of_students;
		double avg_gpa;

		void calc_Average_GPA();
		void add_Student(string name);
		void list_All_Students();
		void get_Specific_Student_Info(int i);
		void grade_Specific_Student(double * grades, int i, int grade_list_length);
		double get_Average_GPA() { return avg_gpa; }
		int get_Num_Students() { return num_students; }
		Roster();
		~Roster();
};
#endif
