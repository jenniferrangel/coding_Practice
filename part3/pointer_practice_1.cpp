#include <iostream>
using namespace std;

int main() { 
	//A pointer is an object that holds the memory address of 
	//another object.  It is very useful because it allows you to
	//manage objects by referring to them systematically
	//rather than naming each one individually. Their utility
	//will be explored more in part 4.  "Pointer" designation
	//is given by *. 
	//
	//The "zero" or "Unassigned" value is NULL.  You can also treat
	//an assigned value of a pointer as "true" in an if statement, and
	//a NULL pointer as "False".
	//
	//If you have an existing variable, you can get its address 
	//with &.
	

	int * x = NULL;  //Initialize a null pointer.

	int y = 4; //Initialize an integer.

	x = &y; //x is given the location of y

	//To access "the thing that x is pointing at", 
	//which is to say the value of y, you "dereference" 
	//the pointer.  Put a * in front of it.
	
	*x = 5;

	//I have changed the value of y by making a pointer access it, 
	//and modify it.

	cout << y << endl;



	//===============================================
	//===============================================
	//=================Problem 1=====================
	//===============================================
	//===============================================
	
	//Use the pointer w to change the values of a, b, and c.

	int a = 1;
	int b = 2;
	int c = 3;


	int * w = NULL;

	//===============================================
	//===============================================
	//=================Problem 2=====================
	//===============================================
	//===============================================
	//What is the meaning of these outputs?
	

	int N = 5;
	int * M = &N;

	cout << "N: " << N << endl;
	cout << "&N: " << &N << endl;
	cout << "M: " << M << endl;
	cout << "*M: " << *M << endl;

	cout << "Why is this different between re-running the program?" << endl;

	//===============================================
	//===============================================
	//=================Problem 3=====================
	//===============================================
	//===============================================
	//There is no reason you can't have pointers that point to pointers.
	int ** L = NULL;
	L = &M; 
	cout << "&M: " << &M << endl;
	cout << "L: " << L << endl;
	cout << "M: " << M << endl;
	cout << "*L: " << *L << endl;
	return 0;
}
