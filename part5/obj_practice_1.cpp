#include <iostream>
#include <vector>
#include <string>
//Notice that we're going to using the string package.
//This lets you use names/words as variable values easily.
//Vector also allows you to use array-type things more easily. Don't worry about it.

using namespace std;


//This is a structure, a type of object. 
//Everything you learn here
//will also apply to "classes", a different type of object.
//They have a list of their own internal variables and functions.
//
//
//Try to read over this and get a feel for what it's doing.
//You don't need to read the whole thing in detail for this
//assignment.
//
//Skip to int main() { below.

struct Student { 
	public:
		//These are variables that each student
		//will have as a "Field".  They're called
		//member variables.
		double gpa;
		//Don't worry about the vector. Think of it as an array that can grow.
		vector<double> grades;
		int days_absent;
		string name;

		//These are member functions, sometimes 
		//called "Methods".  They are defined
		//INSIDE of the structure.
		//
		//If you use "gpa" here, it refers to 
		//THIS student's gpa.

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
		//Notice the functions are conventionally
		//written in camel case.  second_Word_Onward_Capped.
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
			//static_cast<double> says "Treat grades.size() as a double instead
			//of as an integer" since we don't want rounding error from integer
			//arithmetic.
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

		//This is a special function that is always called
		//when the structure is made, called the CONSTRUCTOR.
		//It is always named the same as the structure type.
		//
		//You use it to "Set up" a new Student.

		Student(string entered_name) {
			name = entered_name;
			days_absent = 0;
			gpa = 4.0;
		}

		//Likewise, this is a function that is run when you're
		//done with this object.  It's calle the DESTRUCTOR, 
		//and is always ~"Structure Name". Since we don't
		//have anything defined with "new", we don't need
		//to delete it.
		//

		~Student() { 
		}

};  //Notice it ends with a semicolon.




int main() {
	//We can use our new structure.

	Student Bridget("Bridget");//This makes a new Student and runs the 
	//constructor with the argument "Bridget".  See "Bob_pointer" 
	//for the other way of making a new Student.
	Student Christian("Christian");
	Student Morgan("Morgan");

	//Use the member functions to get information from the students.

	//Access them by using . after the object name.

	Bridget.add_New_Grade(4.0);
	Christian.add_New_Grade(3.8);
	Morgan.add_New_Grade(1.2);
	Morgan.add_New_Grade(2.6);
	Morgan.add_New_Grade(3.6);

	Morgan.get_Student_Info();
	Christian.get_Student_Info();
	Bridget.get_Student_Info();
	
	//Let's make one with pointers instead.
	
	Student * Bob;
	//Right now Bob is just a pointer that points to students.
	//We will make a new address of a freshly made student object
	//using the "New" command.
	
	Student * Bob_pointer = new Student("Bob"); //Calls the constructor with value "Bob",
				//And makes it without a name, but assigns
				//the address to the pointer Bob_pointer.

	//Use ->  (a little arrow) instead of .  if you work with pointers to objects.
	
	Bob_pointer->add_New_Grade(3.4);
	Bob_pointer->add_New_Grade(1.6);
	Bob_pointer->get_Student_Info();

	//Now since we made a thing with "new" and we're done with it,
	//we need to delete it.
	
	delete Bob_pointer;

	//You can also get the variable directly, but for reasons we'll get into
	//later, you usually want to place a "get" function to pull a variable
	//out of the object.
	
	//==================================================================
	//==================================================================
	//=======================Problem 1==================================
	//==================================================================
	//==================================================================
	//Make a new student <yourname> and enter a few grades.  Try to 
	//look into the struct and add in a new function to print out
	//the GPA.
	



	//----------------------------------------------------------------------
	


	//==================================================================
	//==================================================================
	//=======================Problem 2==================================
	//==================================================================
	//==================================================================
	//We can also make arrays and pointers to students the same way you'd make
	//a pointer or an array of something else.  
	//
	//Uncomment this code and run it.
	//
	//Make this code able to handle 5 students instead of 3.
	
	Student ** list; 
	list = new Student * [3];
	string new_name;
	double grades;
	bool keep_going;
	for (int i = 0; i < 3; i++) {
		cout << "Enter name for student " << i+1 << " of 3:";
		cin >> new_name;
		list[i] = new Student(new_name);
		cout << "Enter first grade:";
		cin >> grades;
		list[i]->add_New_Grade(grades);
		do { 
			cout << "Another grade? 0-no, 1-yes" << endl;
			cin >> keep_going;
			if(keep_going) { 
				cout << "Enter next grade: " << endl;
				cin >> grades;
				list[i]->add_New_Grade(grades);
			}
		} while(keep_going);
	}

	cout << "Student info: " << endl;

	for (int i = 0; i < 3; i++) { 
		list[i]->get_Student_Info();
	}
	return 0;
}

































