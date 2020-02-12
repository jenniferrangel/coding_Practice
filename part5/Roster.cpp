#include <iostream>
#include <vector>
#include <string>
#include "roster.h"
using namespace std;

void Roster::calc_Average_GPA() { 
	if (num_students == 0) {
		cout << "No students!" << endl;
		return;
	}
	double sum = 0;
	for (int i = 0; i < num_students; i++) { 
		sum += list_of_students[i]->get_GPA();
	}
	avg_gpa = sum/static_cast<double>(num_students);
	return;
}
void Roster::add_Student(string name) {
	list_of_students[num_students] = new Student(name);
	num_students++;
}
void Roster::list_All_Students() { 
	cout << "List of students:" << endl;
	for (int i = 0; i < num_students; i++) {
		cout << "Student " << i << ": " << list_of_students[i]->get_Name() << endl;
	}
	return;
}
void Roster::get_Specific_Student_Info(int i) { 
	list_of_students[i]->get_Student_Info();
	return;
}
void Roster::grade_Specific_Student(double * grades, int i, int grade_list_length) {
	for (int j = 0; j < grade_list_length; j++) { 
		list_of_students[i]->add_New_Grade(grades[j]);
	}
	list_of_students[i]->calc_GPA();
	return;
}
Roster::Roster() {
	list_of_students = new Student * [99];
}

Roster::~Roster() { 
	for (int i = 0; i < num_students; i++) { 
		delete list_of_students[i];
	}
	delete list_of_students;

}
