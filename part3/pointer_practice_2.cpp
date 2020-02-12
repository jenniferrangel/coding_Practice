#include <iostream>
using namespace std;

int main() { 
	//Dynamically allocated arrays
	
	//Arrays defined like the line below can have fixed length.
	
	int n = 5;
	int arr [n];

	//However, sometimes you may want to turn a pointer INTO 
	//an array.
	
	int * arr_2; 
	arr_2 = new int [n];
	//Since you told the computer "Reserve this space"
	//it will hold onto it FOREVER until you tell it to stop.
	//You MUST delete anything you instantiate with new.
	
	delete arr_2;
	//Failure to do so gives a "memory leak", more and more memory
	//being taken up by old information that's kept reserved.
	

	//You can make a matrix this way, but you need to make it
	//from the outside in. Take a double pointer, and make 
	//it an array of pointers.  And for each of those, make
	//it into an array.
	
	int m = 10;
	float ** arr_3 = new float * [n];
	for (int i = 0; i < n; i++) { 
		arr_3[i] = new float [m];
	}

	//populate the matrix...
	
	for (int i = 0; i < n; i++) { 
		for (int j = 0; j < m; j++) { 
			arr_3[i][j] = i+j;	
			cout << i << "," << j << ": " << arr_3[i][j] << "| ";
		}
		cout << endl;
	}
	//Do stuff with your matrix...
	//...
	//Then delete it, inside out.
	
	for (int i = 0; i < n; i++) { 
		delete arr_3[i];
	}
	delete arr_3;


	//===========================================
	//===========================================
	//=============Problem 1=====================
	//===========================================
	//===========================================
	//Make a triple pointer of doubles. Make a 
	//3D array with new and delete. It's the same as before,
	//but with *** instead, and an extra for loop.
	//Use the following to get started:
	
	double *** M; 
	n = 7;
	m = 7;
	int s = 7;

	M = new double ** [n];

	//Your code goes here.

	delete M;
	return 0;
}
