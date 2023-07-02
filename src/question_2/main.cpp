#include "question2.h"
#include <iostream>
using std::cout;//displays to screen
using std::cin;//capture data from the keyboard

int main()
{
    //variables
    int input;
	char choice;
    string result;

	do{
		//capture num and display
		cout << "Enter a dec string to convert that is between 1 and 512: ";
		cin >> input;
		
		while(input < 1 || input > 512)
        {
            cout << "Invalid input. Please enter a value between 1 and 512. \n";
            cin >> input;
        }

		result = decimal_to_hex(input);
		cout << result<<"\n";

		cout << "Do you wish to exit? (Type 'n' or 'N' to continue)";
		cin >> choice;
		
	} while (choice == 'n' || choice == 'N');
	return 0;
}