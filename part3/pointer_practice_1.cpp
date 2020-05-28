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

	w = &a;
	*w = 8;
	cout << "a = " << a << endl;

	w = &b;
	*w = 9;
	cout << "b = " << b << endl;

	w = &c;
	*w = 10;
	cout << "c = " << c << endl;
	
	//===============================================
	//===============================================
	//=================Problem 2=====================
	//===============================================
	//===============================================
	//What is the meaning of these outputs?
	

	int N = 5;
	int * M = &N;                   //initialized pointer M and gave it location of N

	cout << "N: " << N << endl;     //5
	cout << "&N: " << &N << endl;   // location of N because & gives you the adress
	cout << "M: " << M << endl;     // location of N since M is a pointer 
	cout << "*M: " << *M << endl;   // gives the thing it is pointing at in this case value of N so 5

	cout << "Why is this different between re-running the program?" << endl;

	//different every time we run because it is stored in different locations 


	//===============================================
	//===============================================
	//=================Problem 3=====================
	//===============================================
	//===============================================
	//There is no reason you can't have pointers that point to pointers.
	
	int ** L = NULL;                  //L is a pointer pointing to a pointer
	L = &M;                          // L is given the location of M
	cout << "&M: " << &M << endl;    //because it has an &, this prints location of M
	cout << "L: " << L << endl;      //location of M
	cout << "M: " << M << endl;      //location of N because M is pointer
	cout << "*L: " << *L << endl;    //gives N because L -> M -> N
	return 0;
}
