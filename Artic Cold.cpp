// Artic Cold.cpp 
// Demonstrating basic switch use

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	char choice = ' ';

	do {

		cout << "Hello, Why was this project created?";
		cout << endl;
		cout << "1. Because I love the cold\n";
		cout << "2. Because I love the Artic\n";
		cout << "3. Because I want code to survive\n";
		cout << "9. Exit      \n\n";
		cout << "Please Select a Number:";
		cin >> choice;

	} while (choice != '1' && choice != '2' && choice != '3' && choice != '9');
	switch (choice)
	{
	case '1':
	{
		char choice = ' ';

		cout << "This code would love the cold weather";
		cout << endl;
		cout << "9. Exit \n\n";


	} break;
	{
	case '2':
	{
		char choice = ' ';
		cout << "The Artic is an awesome place especially underground";
		cout << endl;
		cout << "9. Exit \n\n";
	} break;
	}
	{
	case '3':
	{
		char choice = ' ';
		cout << "It would be pretty neat to know something you created could potentially be stored somewhere long after you are gone";
		cout << endl;
		cout << "9. Exit \n\n";
	}
	}	return 0;
	}
}

	
	

