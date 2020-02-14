#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Suppose we need a special way to keep track
//of all of our students.  Let's make a new structure
//that has a list of students that maintain it. 
//This is the same student structure as before.
struct Student { 
	public:
		double gpa;
		vector<double> grades;
		int days_absent;
		string name;

		void set_GPA(double new_gpa) { 
			gpa = new_gpa;
			return;
		}
		double get_GPA() { 
			return gpa;
		}
		string get_Name() { 
			return name;
		}
		void increment_No_Days_Absent() { 
			days_absent++;
			return;
		}
		void reset_Grades() { 
			grades.clear();
			return;
		}
		void add_New_Grade(double new_grade) { 
			grades.push_back(new_grade);
			return;
		}
		void calc_GPA() { 
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
		void get_Student_Info() { 
			calc_GPA();
			cout << "Student name: " << get_Name() << endl;
			cout << "Number of grades assigned: " << grades.size() << endl;
			for (unsigned int i = 0; i < grades.size(); i++) { 
				cout << "Class " << i+1 << ": ";
				cout << grades.at(i) << endl;
			}
			cout << "Total GPA:" << get_GPA() << endl;
		}

		//Constructor - Run with new students
		Student(string entered_name) {
			name = entered_name;
			days_absent = 0;
			gpa = 4.0;
		}

		//Destructor - Run when student is deleted
		~Student() { 
		}

};  //Notice it ends with a semicolon.


//Now we will define a new struct called "Roster" which will keep track of our 
//students for us.

struct Roster { 
	public:
		int num_students;
		Student ** list_of_students;
		double avg_gpa;

		void calc_Average_GPA() { 
			if (num_students = 0) {
				//We don't wanna divide by zero so we set
				//up this catch so we don't do it later on
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
		//Adds a new student with name "name"
		//Note it's made with "new" as a pointer, 
		//so it must be deleted later. See ~Roster() {...}
		void add_Student(string name) {
			list_of_students[num_students] = new Student(name);
			num_students++;
		}
		void list_All_Students() { 
			cout << "List of students:" << endl;
			for (int i = 0; i < num_students; i++) {
				cout << "Student " << i << ": " << list_of_students[i]->get_Name() << endl;
			}
			return;
		}
		void get_Specific_Student_Info(int i) { 
			list_of_students[i]->get_Student_Info();
			return;
		}
		void grade_Specific_Student(double * grades, int i, int grade_list_length) {
			for (int j = 0; j < grade_list_length; j++) { 
				list_of_students[i]->add_New_Grade(grades[j]);
			}
			list_of_students[i]->calc_GPA();
			return;
		}
		
		double get_Average_GPA() { 
			//calc_Average_GPA();
			return avg_gpa;
		}
		int get_Num_Students() { return num_students; } 

		//Constructor:  Build the list of students
		//with room to expand.
		Roster() {
			list_of_students = new Student * [99]; //99 is the max number of students now.
		}

		//Destructor
		~Roster() { 
			//Get rid of the students listed
			for (int i = 0; i < num_students; i++) { 
				delete list_of_students[i];
			}
			//then the list itself
			delete list_of_students;

		}
};


int main() {
	//We can use our new structure.

	Roster * directory = new Roster(); //Since this calls the constructor which is a funciton, 
				//Include the empty parameter.
	directory->add_Student("Bridget"); //Adds with index 0
	directory->add_Student("Christian"); //Adds with index 1
	directory->add_Student("Morgan"); //Adds with index 2
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
	//  Why do we need to cap the number of students?  Where is the cap set?
	//  What would happen if the number of students exceeded 100?
	//
	//  Make a for loop to add 100 students to a new Roster * directory2.
	//
	//
	//
	//==================================================================
	//==================================================================
	//=======================Problem 2==================================
	//==================================================================
	//==================================================================
	//Uncomment calc_Variance() {...} in Roster.  Add a new function to
	//Student that would calculate variance.
	//
	//Remember, the variance is calculated by 
	//1/N sum_i=1:N (X-mean)^2
	return 0;
}


































