#include <iostream>
#include "factorial_functions.h"
using namespace std;

//This is the same program as before, but notice the 
//difference in the includes above.

int main() { 
	//I want to print the factorial of the first 8 naturals.
	for (int i = 1; i <= 8; i++) print_factorial(i);
	return 0;
}
