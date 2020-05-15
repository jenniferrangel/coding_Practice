#include <iostream>
using namespace std;

int main() {
	//This is the "main function".  Everything happens in here for now.
	//If you try to type, nothing happens.  That's because you're in
	//command mode instead of insert mode.
	//
	//Use the arrow keys to maneuver for now and uncomment the line of code
	//below. Enter insert mode by pressing "i" and then leave it by pressing
	// "esc".  
	cout << "Hello, World!" << endl;

	// Once you've uncommented it, save and quit by entering command mode and typing :wq.
	// When you type : in command mode, you can see the command in the
	// bottom left corner of your screen.
	// Compile and run it by typing "g++ vim_practice_1.cpp -o my_first_program.out" 
	//
	// run the program by typing "./my_first_program.out"
	return 0;
}
