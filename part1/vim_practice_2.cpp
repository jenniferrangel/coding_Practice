#include <iostream>
using namespace std;

int main() { 
	//Read the below documentation to make 10 copies of the 
	//following line and have this program print out:
	//1
	//2
	//3
	//4
	//5
	//...
	//9
	//10.
	cout << "1" << endl; 
	cout << "2" << endl;
	cout << "3" << endl; 
	cout << "4" << endl;
	cout << "5" << endl;
	cout << "6" << endl;
	cout << "7" << endl;
	cout << "8" << endl;
	cout << "9" << endl;
	cout << "10" << endl;
       

	//Command mode (what you start in)
	//Funtions:  Type /<stuff> to search the document
	//           for <stuff>.  Type enter, and then n to search forward
	//           for <stuff> and N to search backwards for <stuff>. Try 
	//           it now. You can also press * over a word to search that
	//           in the same way.
	//Type :<line number> (enter) to jump to a line.
	//Various shortcuts: 
	//u - undo (press repeatedly) 
	//ctrl-R - redo
	//o - insert a line above the cursor and enter insert mode
	//O - Same thing but after the cursor.
	//A - enter insert mode at the end of the line
	//a - enter insert mode after the cursor
	//i - enter insert mode before the cursor
	//v - enter visual mode
	//V - enter visual line mode
	//ctrl-v - enter visual block mode. 
	//yy - copy line
	//dd - cut line
	//cc - cut line and enter insert mode to replace cut text
	//p - paste line.
	//:<line number> - jumps you to line number.
	//arrow keys/page up-page down/ ( and )/ w and b all navigate differently.
	//Try them out and get used to this.
	//This is far from all of the shortcuts.  
	
	//Visual mode  - 
	//Usually used for copying things. Try entering visual/visual block/visual line
	//to see how the highlighting works.  When you've highlighted text, 
	//y - Copy text and return to command mode
	//d - Cut text and return to command mode
	//esc - return to command mode
	//= - Auto-indents highlighted text.

	//Insert mode - 
	//You can type normally.  Delete erases to the right, backspsace to the left.
	
	//Replace mode - 
	//Like insert, only you overwrite what the cursor is over.  Useful for corrections.
	return 0;
}
