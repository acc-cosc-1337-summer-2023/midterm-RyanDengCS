#include "question3.h"
#include <iostream>
using std::cout;//displays to screen
using std::cin;//capture data from the keyboard

int main()
{
    //variables
    int input;
	char choice;
    int result;

	do{
		//capture num and display
		cout << "Enter a location in the Fibonacci sequence between 1 and 15: ";
		cin >> input;

        while(input < 1 || input > 15)
        {
            cout << "Invalid input. Please enter a value between 1 and 15. \n";
            cin >> input;
        }

        result = get_fib_sequence(input);
		cout << result<<"\n";
		cout << "Do you wish to exit? (Type 'n' or 'N' to continue)";
		cin >> choice;
		
	} while (choice == 'n' || choice == 'N');
}