// For loop assignment 2
//Admission: 147683

#include <iostream>
using namespace std; 

//Using a for loop write a program to compute the sum of numbers between 20 and 25.

int main()
{
	//Declare and initialize the variables
	int num = 20;
	int sum = 0;
	for (num = 20; num <= 25; num++)
	{
		sum = num + sum; 
	}

	cout << "The sum of the numbers between 20 and 25 is: " << sum << endl; 


}

