#include<iostream>
using namespace std;

//This is a function. Notice I'm defining it BEFORE main. 

float funct_One(double x) { 
	float M = x/3;
	x = x/3;
	cout << "From the function: x is: " << x << endl;
	return M;
}

void funct_Two(int &x) { 
	x = x*2;
	return;
}

void funct_Three(int * x) { 
	*x = *x * 2;
	return;
}

int main() { 
	double z = 500;
	//(Notice "float" in front of funct_One, it means a 
	//float will be "returned", put in place of where the
	//function is called.) 
	float y = funct_One(z);
	cout << "y is: " << y << endl;
	cout << "z is: " << z << endl;

	//The function funct_One COPIES z into a local version of it
	//called x.  as it stands, it does not change the value of z.
	

	//If you want the values of of the passed-in value to change, then
	//you pass in the REFERENCE. See example:
	
	int L = 4;
	//This function doesn't "return" anything (void type), so you can just
	//run it as-is.  It doesn't replace itself with any other type of data
	//type, so it just sits there. Usually void functions "do something" and
	//then stop, and are used to make code more readable.
	funct_Two(L);
	cout << "L is " << L << endl;
	
	//Alternatively, pass in a pointer and work with that.  
	//Now the POINTER is copied, but the place it's working
	//with is the same.
	
	int * Q = &L;
	funct_Three(Q);
	cout << "L is " << L << endl;


	//====================================================
	//====================================================
	//===================Problem 1========================
	//====================================================
	//====================================================
	//See what happens if you cut-paste the function from 
	//above main to below.  Remember, shift-V for visual 
	//line, arrow keys to select the lines, and d to cut, y to paste.
	//
	//The compiler reads from top to bottom, so it can't understand
	//when the things 
	


	

	//====================================================
	//====================================================
	//===================Problem 2========================
	//====================================================
	//====================================================
	//Make a new function that takes the below double q
	//and doubles it in a void function.  Make a second
	//function that takes a double as an input, and 
	//prints out:
	//"The value is " <Value of input>
	

	double q = 433.76545;

	//Function that doubles q goes here.
	

	//Function that prints the doubled q here.



	return 0;
}
