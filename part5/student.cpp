#include <iostream>
#include <string>
#include <vector>
#include "student.h"
using namespace std;
void Student::set_GPA(double new_gpa) { 
	gpa = new_gpa;
	return;
}
void Student::increment_No_Days_Absent() { 
	days_absent++;
	return;
}
void Student::reset_Grades() { 
	grades.clear();
	return;
}
void Student::add_New_Grade(double new_grade) { 
	grades.push_back(new_grade);
	return;
}
void Student::calc_GPA() { 
	if (grades.size() == 0) {
		cout << "Student " << name << " hasn't taken classes!" << endl;
		gpa = 4.0; 
		return;
	}

	double sum = 0;
	for (unsigned int i = 0; i < grades.size(); i++) {
		sum += grades.at(i);
	}
	gpa = sum/static_cast<double>(grades.size());
	return;
}
void Student::get_Student_Info() { 
	calc_GPA();
	cout << "Student name: " << get_Name() << endl;
	cout << "Number of grades assigned: " << grades.size() << endl;
	for (unsigned int i = 0; i < grades.size(); i++) { 
		cout << "Class " << i+1 << ": ";
		cout << grades.at(i) << endl;
	}
	cout << "Total GPA:" << get_GPA() << endl;
}

Student::Student(string entered_name) {
	name = entered_name;
	days_absent = 0;
	gpa = 4.0;
}

Student::~Student() { 
}
