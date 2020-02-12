#include <iostream>
using namespace std;

struct Mystruct { 
	//private: 
	int my_value; //Defaulted to public
	public: // <---- Unnecessary
	Mystruct() { 
		my_value = 1;
	}
	~Mystruct() {}
};

//This is a class. Notice it's exactly the same as a structure, 
//but the variables and functions defualt to "Private".
//"Private" is not allowed to be called, changed, or referenced
//outside of the object. Member functions can freely modify or 
//even return private variables, but outside functions can't. 
class Myclass { 
	//private:  <--- Unnecessary
	int my_value; //Defaulted to private
	public:
	Myclass() { 
		my_value = 5;
	}
	~Myclass() {}
	/*int get_My_Value() {
	  return my_value;
	  }*/
};

int main() { 
	Mystruct A;
	cout << "Mystruct my_value: " << A.my_value << endl;
	A.my_value = 2;
	cout << "Mystruct my_value: " << A.my_value << endl;

	Myclass B;
	//=====================================================
	//=====================================================
	//=================Problem 1===========================
	//=====================================================
	//=====================================================
	//Uncomment this line and run it. 
	//cout << "Myclass my_value: " << B.my_value << endl;
	//Try moving my_value down into "public" (Under public:)
	//and re-running this.



	//=====================================================
	//=====================================================
	//=================Problem 2===========================
	//=====================================================
	//=====================================================
	//Uncomment "private:" in Myclass and make sure my_value is 
	//considered private. Uncomment get_My_Value().
	//Write a new funciton under Myclass public called 
	//"set_Myvalue(int x)" that changes my_value to x.
	//
	//Use that to modify B's my_value in main, and then print 
	//it.





	//These are useful to make sure object stats aren't 
	//accidentally accessed by the wrong thing. It's good
	//form to make sure you have a very set, predictable
	//and searchable way to see how a variable gets changed.


	return 0;
}
