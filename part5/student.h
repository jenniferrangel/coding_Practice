#ifndef _STUDENT_H_INCLUDED_
#define _STUDENT_H_INCLUDED_
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Student { 
	public:
		double gpa;
		vector<double> grades;
		int days_absent;
		string name;
		void set_GPA(double new_gpa);
		double get_GPA() { return gpa; }
		string get_Name() { return name; }
		void increment_No_Days_Absent();
		void reset_Grades();
		void add_New_Grade(double new_grade);
		void calc_GPA();
		void get_Student_Info();
		Student(string entered_name);
		~Student();

};
#endif
