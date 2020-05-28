#include <iostream>
using namespace std;

int main() { 
	//Here we'll go through the basic data types and logical options.
	//search for "Problem 1" below.
	
	//All lines end in semicolons. 
	//All data must be "initialized", or defined.  
	//It lives only within the deepest
	//curly braces in which it was defined, called "scopes".
	
	//x = 2;  doesn't work, since x doesn't exist yet.


	//Int types.  Some have more accuracy, or more max size based on 
	//the type of int used.
	int x = -1;
	unsigned int x_us = 2; //Don't make these negative. They can be big.
	long int x_li = 400000000; //Take more memory. Can be real big.
	short int x_si = 34; //Take less memory. Usually small.
	unsigned long int x_uli = 500000000000000; //Nonnegative. REAL big.
	//Don't divide these when the answer isn't an integer. 
	//It does weird cutoffs without rounding.

	//Floats/doubles/etc have decimal accuracy.
	float y_f = 2.4; 
	double y_d = 3.00000001;
	long double y_ld = 4.300000000000001;

	char a = 'a';  //One character, ASCII. Don't put whole words.


	//COMPARISONS
	// > greater than
	// < less than
	// ! not 
	// >= \geq
	// <= \leq
	// == "Equal to", note the double equals
	// != "Not equal to"
	// && "And"
	// || "Or"
	// Use parenthesis for your boolean algebra.
	
	//===================================================
	//===================================================
	//===============Problem 1===========================
	//===================================================
	//===================================================
	//Look for the lines that print "Get this to print - #",
	//and the ones that say "Don't print me!"
	//Don't change the logic, but only the values defined below.

/*
	int switch_entry = 4;

	switch (switch_entry) { 
		case 1: 
			cout << "Don't print me!" << endl;
			break;
		case 2:
			cout << "Get this to print - 1" << endl;
		case 3:
			cout << "Don't print me!" << endl;
			cout << "What's different about case 2?" << endl;
			break;
		case 4:
			cout << "Don't print me!" << endl;
			break;
		default:
			cout << "This bit prints when switch_entry is wrong" << endl;
			break;
	}

	//for syntax: 
	//for (declare iterator; thing to check; update command)

	for (int i = 0; i < 10; i++) { 
		cout << "I've printed " << i+1 << "times!" << endl;
		if (i == 10) { 
			cout << "Get this to print - 2" << endl;
		}
	}

	for (int i = 10; i > 0; i--) { 
		cout << "counting down: " << i << endl;
	}

	bool condition_1 = false;

	if (condition_1) { 
		cout << "Get this to print - 3" << endl;
	}

	bool condition_2 = true;

	if (!condition_2) { 
		cout << "Get this to print - 4" << endl;
	}

	bool condition_3 = false;
	
	if (condition_3 == true) { 
		cout << "Get this to print - 5" << endl;
	}

	int n = 4; 

	if (n > 3) { 
		cout << "Don't print this!" << endl;
	} else if (n <= 2) { 
		cout << "Don't print this!" << endl;
	} else { 
		cout << "Get this to print - 6" << endl;
	}

	bool condition_4 = true;
	int m = 5;

	if ( (m == 7) && !condition_4) { 
		cout << "Don't print this!" << endl;
	} else if ( (m == 6) && !condition_4) {
		cout << "Get this to print - 7" << endl;
	} else { 
		cout << "Don't print this!" << endl;
	}
	


	//While loops may be entirely skipped if their condition is
	//false before they start.  Do-while loops are tested after
	//and ALWAYS run at least once.
	
	int j = 0; 

	while (j < 15) { 
		j = j+2; 
		if (j == 5){ 
			cout << "Get this to print - 8" << endl;
		}
	}

*/

	//===================================================
	//===================================================
	//===============Problem 2===========================
	//===================================================
	//===================================================
	/* Block comments 
	 * are written
	 * like this.
	 */
	//The next bit of code isn't functional.  Figure out
	//why.  Uncomment it and try to work on it. (Recall visual block is
	//ctrl-v).
	//If you try to compile it, the compiler will help you.
	

	//This line of code adds together all numbers
	//between 1 and n_max, but only if n_max is 
	//greater than 30.

/*
	int n_max = 40;
int sum = 0;
if (n_max > 30) { 

	for (int i = 0; i < n_max; i++) {
		sum = sum + (i + 1);
		//Alternately written as
		//sum += (i+1);
	}
}
cout << "sum = " << sum << endl;
*/	 


	//===================================================
	//===================================================
	//===============Problem 3===========================
	//===================================================
	//===================================================
	
	//If code runs infinitely, or you otherwise need it to stop, 
	//kill it with ctrl-C in bash (the terminal).
	
	//Make this while loop functional. What was wrong with it?
	//It's supposed to print every sixth number between 1 and 100.
	//Make sure it does that.
	
	// <----- Having just the endcaps also do block comments. 
	//Remember shift-v for visual line, d to delete.


	int k = 0;

	/*while (true) { 
		// % is modulus. It returns the remainder after integer division.
		
		if (k > 0) { 
			cout << k << endl;
		}
		//break; exits the deepest-scope loop.

		if (k == 100) { 
			break;
		}
		k += 6;
	}
	*/
	
	for(int k=0; k<=100; k++){
		if (k % 6 ==0){

			cout << k << endl;
		}
	}
	


	return 0;
}




































