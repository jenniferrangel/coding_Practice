#include <iostream>
using namespace std;

int main() { 
	//You now have two windows open.  They should be left and right.
	//If you instead type :split, then it will be up and down instead.
	//
	bool other_important_thing = true;
	int my_super_important_number = 5;

	if (my_super_important_number > 2) {
		if (other_important_thing) { 
			//Oh no! I need a loop in here.
			//
			//Go to vim_practice_3.cpp by pressing ctrl_w in 
			//command mode, then right arrow.  This lets 
			//you navigate between your windows.
			//These can be resized.  See the bottom of this file
			//for some shortcuts.

			//Visual-line copy the do-while loop over here.
			//Then, change the condition to be 
			// while i < my_super_important_number.  
			//
			//Make sure it's properly indented by highlighting it 
			//and typing =.
			//
			//Notice one thing: the file names are below
			//the panels listed, but if there is a [+] after
			//the file name it means there are unsaved changes.
			//
			//Save and quit the file when you're done by typing :wq
			//in command mode for each of these.
			//Compile and run this code.
		}
	}
	return 0;
}


//Optional: Split and navigation functionality
//
//Type :split <file> to cut the current frame horizontally, 
//or :vsplit <file> to cut the current frame vertically.
//ctrl-w =: makes them all equalize in size (if you've changed them)
//ctrl-w -: makes the current pane shorter
//ctrl-w _: Makes the current pane as tall as the screen allows.
//ctrl-w |: Makes the current pane as wide as the screeen allows.
//Typing :Explore in command mode lets you explore files through vim visually.
//This causes a split if your current pane has unsaved changes ( a [+] after the file name)
