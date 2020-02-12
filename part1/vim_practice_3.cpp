#include <iostream>
using namespace std;

int main() { 
	//This code is really important.  Trust me.
	//However, that inner do-while loop (covered later) can be reused in
	//your other file, 
	//vim_practice_4.cpp.
	//
	//Type :vsplit vim_practice_4.cpp 
	//
	bool important_thing = true;
	if (important_thing) { 
		 int i = 1;
		 do { 
			 cout << "This code is important and reusable." << endl;
			 i++;
		 } while (i == 2); 
	}
	return 0;
}
