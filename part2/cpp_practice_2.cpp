#include <iostream> 
using namespace std;

int main() { 

	//Arrays are lists whose enties are all of the same data type.
	//The size is pre-listed. Example:
	

	int my_first_array [5] = {1,2,6,7,8}; 

	//This is of length 5, but indexing starts from 0.  
	
	for (int i = 0; i < 5; i++) {
		//Notice that i = 0,1,2,3,4.
		cout << "Entry " << i << ": " << my_first_array[i] << endl;
	}
	//What happens if we access a bigger number?  The code still compiles. 
	cout << my_first_array[5] << endl;

	//You reach "Outside", into other computer memory.  It grabs
	//whatever's there.  Re-running this gives you different answers.
	//It's known as "Garbage".
	//
	//Be very careful, since the compiler won't know if you've
	//gone out of bounds.
	
	//You can also build arrays just by specifyiing size, 
	//but they'll be filled with garbage until you set them.
	

	int my_second_array [8];
	cout << "Garbage: " << my_second_array[4] << endl;

	//Populate it:
	
	my_second_array[0] = 0;
	my_second_array[1] = 1;
	my_second_array[2] = 2;
	my_second_array[3] = 3;
	my_second_array[4] = 4;
	my_second_array[5] = 5;
	my_second_array[6] = 6;
	my_second_array[7] = 7;

	//=================================================
	//=================================================
	//===============Problem 1========================
	//=================================================
	//=================================================
	//Make an array "arr" of length 50 and populate it
	//with even numbers 0, 2, ... , 98 
	//Change the 24th element to "16"
	//Print the array.
	 
		int arr[50];
		int k = 0;
		
		for (int i = 0; i<50; i++){
			arr[i]=2*k;
			k++;
			}
		arr [24] = 16;

		for(int j = 0; j < 50; j++){
			cout << arr[j] <<endl;
		}


	//=================================================
	//=================================================
	//===============Problem 2========================
	//=================================================
	//=================================================
 

	//You can make tables (effectively) or matrices with arrays.
	//What you're technically doing is making an array where every entry is an array.
	
	int my_table [5][5];
	//If you define arrays this way, the numbers MUST be fixed. See problem
	//3 for making them dynamic sized.

	//Since it's just "first and second indices" and these are being 
	//stored all over the place in memory, it's up to you which one is 
	//"row" and which one is "column" as long as it's consistent.
	
	for (int i = 0; i < 5; i++) { 
		for (int j = 0; j < 5; j++) { 
			my_table[i][j] = i*j;
			my_table[i][j] += 1;      //because our index starts at 0 and want it at 1
		}
	}

	//We can also print this.
	
	for (int i = 0; i < 5; i++) { 
		for (int j = 0; j < 5; j++) { 
			cout << my_table[i][j] << ", ";
		}
		cout << endl;
	}

	//Make a new array, 10x10 of floats.  Have it print the matrix
	// 1,2,3,4,....,9,10
	// 11,12,...,19,20
	// ...
	// 91,92,...,100.
	//Hint:  Shift V, y and p to highlight, copy, paste the code above and modify it.
	//You should use % (modulus) to calculate the entries of the table.
 	//If you're wondering what kind of object the array variable "my_table" is
 	//without any [] after it, it's a pointer. That will be in part 3.
	
	
	int new_array [10][10];
	
		for (int i=0; i<10; i++){
			
			for(int j=0; j<10; j++)
			{
				new_array[i][j] = (10*i) + j+1;
			
				cout << new_array[i][j] <<",";
			}
			cout << endl;
		}
	
	/*
	int new_array [10][10];
	int j = 0;

		for (int i=0; i<10; i++){                                     	            
			                                            	
			//int j=0;             	                                                      		  
				if(j <9) 
				{
					new_array[i][j] = (10*(i+1)) % (9-j);
					j++;
				}

				if( j == 9)                                         	  
				{                                                   	  
					new_array[i][j] = (i+1)*(j+1);  
				
				}
		}

	for (int i = 0; i<10; i++){

		for (int j = 0; j <10; j++)
		{

			cout << new_array [i][j] <<",";
		}
		cout <<endl;
	}
	*/
                	  
       return 0;         	  
                	  
                	  
}                	  

