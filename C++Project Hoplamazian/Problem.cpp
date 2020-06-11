#include <iostream>
using namespace std;

/*Complete the following: Write some code to print out a list of dog names,
numbered by the order they come in. (use a printNames() function)*/

//Answer:

void printNames(){
	string names[8] = {"Bruce", "Kelly", "Flash", "Bob", "Aquaman", "Burt the poodle", "Greta", "José"};
	int length = sizeof(names) / sizeof(names[0]);
	cout << "Names: \n";	
	for (int i = 0; i < length; i++){
		cout << (i+1) << ": " + names[i] + "\n";
	}
}


/*Complete the following: Write some code to create function sumNumbs() which takes 2 integer inputs
as parameters to sum them.  

sum(3, 4) --> 7
sum(11, 45) --> 56
sum(-1, 0) --> -1

*/

int sum(int x, int y){
	return x + y;
}


/* Complete the following: Write some code to make a function that takes two integer inputs
amd outputs weather the first one should be added, subtracted, divided, or multiplied by the second
one to get 11. If none of the aformentioned actions can get the two numbers to equal 11, then return "Invalid".

findWay(7, 4) ---> Addition
findWay(11, 1) ---> Multiplication
findWay(33, 3) ---> Division

*/


string findWay(int x, int y){
	if (x + y == 11){
		return "Addition";
	} else if (x - y == 11){
		return "Subtraction";
	} else if (x * y == 11){
		return "Multiplication";
	} else if (x / y == 11){
		return "Division";
	} else {
		return "Invalid";
	}

}



int main(){
	printNames();

	int x = 0;
	int y = 0;

	cout << "Give me an x int: ";
	cin >> x;
	cout << "Give me a y int: ";
	cin >> y;

	cout << "Sum: " << sum(x, y) << "\n";
	cout << "To get 11: " << findWay(x, y) << "\n";


}


