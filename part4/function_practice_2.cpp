#include <iostream>
using namespace std;


//This is a function prototype.  It lets the program know what functions
//will be defined so the compiler doesn't return errors for not knowing what a function is.

void print_factorial(int n); //Note it ends with a semicolon instead of {...}. Look below main.
int factorial(int n); 

int main() { 

	//Using functions, you can include a lot of information compactly
	//to make your logical flow clear.
	//
	//I want to print the factorial of the first 8 naturals, 
	//so all I need to do is this.
	
	for (int i = 1; i <= 8; i++) print_factorial(i);

	//A for loop doesn't need { } if it's only one line.  Same for if.
	//===============================================================
	//===============================================================
	//====================Problem 1==================================
	//===============================================================
	//===============================================================
	//Make a new function that has the code body below main().
	//Have this function just print "Hello, World" to the terminal.
	//
	//===============================================================
	//===============================================================
	//====================Problem 2==================================
	//===============================================================
	//===============================================================
	//Make a new function "multiply(...)" below main() that takes in two
	//double parameters a and b, and prints their product to the screen.
	return 0;
}




//This is the prototyped function. Now, it ends with {...} and is the actual definition
//of the function.  This allows you to define the function away from where it's used.
//This will be useful later.

int factorial(int n) { 
	if (n == 0 || n ==1) { 
		return 1;
	} else { 
		return n * factorial(n-1);
	}
}


void print_factorial(int n) {
	int fact_value = factorial(n);
	cout << "The factorial of " << n << " is " << factorial(n) << "." << endl;
	return;
}


//Notice that factorial(...) calls itself under different
//conditions.  This is called "recursion".  It takes a lot of
//memory, but can make code short. It usually takes longer
//as well, and it will run into problems if you don't 
//guarantee it has a terminating point... e.g.
//if n = 0 or -1
//
//Bonus question:  What happens if you execute
//factorial(-1) as presented here?
