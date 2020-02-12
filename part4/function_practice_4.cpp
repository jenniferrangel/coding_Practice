#include <iostream>
using namespace std;

double product(double x, double y) {
	return x*y;
}

int product(int x, int y) {
	return x*y;
}

double product(double x, double y, double z) {
	return x*y*z;
}

int main() { 

	//As we can see above, you can call multiple functions
	//the same name by altering the set of parameters.
	//This is known as "overloading a function".
	//
	//The compiler will look for instances where the function
	//is called, and run the "version" of the function that 
	//fits the expected parameter types.
	
	double x_d = 4.20;
	double y_d = 6.9;

	cout << "product returns " << product(x_d,y_d) << endl;


	int x_i = 420;
	int y_i = 69;

	cout << "product returns " << product(x_i,y_i) << endl;

	int z_i = 8675309;

	cout << "product returns " << product(x_i,y_i,z_i) << endl;

	//===============================================
	//===============================================
	//===============Problem 1=======================
	//===============================================
	//===============================================
	//Make another overloaded version of product and get it to print.

	//===============================================
	//===============================================
	//===============Problem 2=======================
	//===============================================
	//===============================================
	//Try making another version of product that has (double w, double v)
	//as parameters and see what happens.
	return 0;
}
