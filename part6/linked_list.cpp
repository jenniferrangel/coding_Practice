#include <iostream>
#include <string>
using namespace std;

//This is a simple data structure when you want there to 
//be a natural ordering of your data with "left" and "right"
//in a way that makes sense to you.
//
//They have a "head node", the "Top of the list". 
//You need to externally keep track of the "head node", 
//as a way to get into your list.

class Node { 
	private: 
		Node * left;
		Node * right;
		double data;
		bool last_node;
	public:
		void set_Right_Neighbor(Node * r) { 
			right = r;
			return;
		}
		void set_Left_Neighbor(Node * l) { 
			left = l;
			return;
		}
		Node * get_Right_Neighbor() { 
			return right;
		}
		Node * get_Left_Neighbor() { 
			return left;
		}
		void set_Last_Node(bool b) {
			last_node = b;
			return;
		}
		bool get_Last_Node() { return last_node; } 
		double get_Data() { return data; }
		Node() { 
			left = NULL;
			right = NULL;
			data = 0;
		}
		Node(double d) { 
			left = NULL;
			right = NULL;
			data = d;
		}
};

class Nodelist { 
	private: 
		int num_of_list_elements;
		Node * head;
	public:
		void wipe_List() { 
			//Only do something if there's a list.
			if (head) { 
				Node * temp = head;
				Node * next = temp;
				bool keep_going;
				do { 
					if (!temp->get_Last_Node()){
						next = temp->get_Right_Neighbor();
						keep_going = true;
					} else { 
						keep_going = false;
						next = NULL;
					}
					delete temp;
					if (next) {
						temp = next;
					}

				} while (keep_going);
				head = NULL;
			}
			cout << "Wiped List Successfully" << endl;
			return;
			num_of_list_elements = 0;
		}
		void add_Node(double d) {
			if (!head) { 
				head = new Node(d);
				head->set_Right_Neighbor(head);
				head->set_Left_Neighbor(head);
				head->set_Last_Node(true);
				return;
			}
			Node * temp = new Node(d);
			Node * last_node = head->get_Left_Neighbor();
			temp->set_Right_Neighbor(head);
			temp->set_Left_Neighbor(last_node);
			last_node->set_Right_Neighbor(temp);
			head->set_Left_Neighbor(temp);
			last_node->set_Last_Node(false);
			temp->set_Last_Node(true);
			num_of_list_elements++;
		}
		void print_List() { 
			Node * temp = head; 
			int i = 1;
			do {
				cout << "Data " << i++ << ": " << temp->get_Data() << endl;
				temp = temp->get_Right_Neighbor();
			} while (temp != head);
		}
		//void remove_Node(double d);
		Nodelist() { 
			head = NULL;
			num_of_list_elements = 0;
		}
		~Nodelist() { 
			wipe_List();
		}
};

int main() {
	Nodelist mylist;
	mylist.wipe_List();
	for (int i = 0; i < 10; i++) {
		mylist.add_Node(2.5*i);
	}
	mylist.print_List();
	//mylist.head = NULL;
	mylist.wipe_List();
	//=============================================
	//=============================================
	//=============Problem 1=======================
	//=============================================
	//=============================================
	//If you uncomment the line before wipe_list, why
	//is there an error?  Would this give an error
	//if this were a struct instead of a class?
	//=============================================
	//=============================================
	//=============Problem 2=======================
	//=============================================
	//=============================================
	//This list progam makes a Nodelist, fills it with 
	//some procedurally generated data, and then prints it.
	//
	//I then manually wipe the list with mylist.wipe_List();,
	//
	//Compile and run the code.  Why does it print 
	//"List wiped successfully" three times?
	//
	//Hint:  What code causes this to run?  Where is that 
	//function called?
	

	//=============================================
	//=============================================
	//=============Problem 3=======================
	//=============================================
	//=============================================
	//Uncomment the function prototype in the Nodelist
	//and define the following function below main:
	//
	//Nodelist::remove_Node(double d) { 
	//... 
	//}
	//Make this function search the list for the first
	//node with data "d" and remove it.  Make sure it 
	//doesn't break the rest of the structure.
	//
	//Look at how new nodes are added and how the list
	//is wiped as a hint.
	//
	//Have the following code run properly and without
	//error:
	/*
	Nodelist mylist2;
	mylist2.wipe_List();
	for (int i = 0; i < 10; i++) {
		mylist2.add_Node(2.5*i);
	}
	mylist2.remove_Node(5.0);
	mylist2.remove_Node(6.0);
	mylist2.remove_Node(22.5);
	mylist2.print_List();
	*/
	

	//=============================================
	//=============================================
	//=============================================
	//=============Problem 4=======================
	//=============================================
	//=============================================
	//Add a new function that searches the node list
	//for a value "d", and adds a node with data "new_data"
	//after it.
	//Prototype this function in Nodelist and define it below.
	//=============================================
	//=============================================
	//=============================================
	//=============Problem 5=======================
	//=============================================
	//=============================================
	//This is a little bit longer.  Make this a table
	//instead of a list by giving each node three pieces
	//of data.  Perhaps a string "Make", and an integer
	//"Year", as well as a double "Price" to allow this
	//structure to be a basic data structure.
	//
	//Don't forget to #include<string>.  See the "Student"
	//example in ~/part5 for how to use strings.
	return 0;
}
