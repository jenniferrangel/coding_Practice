#include <iostream>
using namespace std;
//This is a header file.  It is essentially pasted
//in at the top of main.cpp, which is what include
//files are.  Notice that the header is "pasted" ABOVE
//main so the prototypes are not necessary.  The compiler
//already knows what factorial(...) and print_factorial(...)
//are by the time it sees it.
//
//
//Note that this still includes <iostream> so that it knows
//what "cout" and such are.
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
