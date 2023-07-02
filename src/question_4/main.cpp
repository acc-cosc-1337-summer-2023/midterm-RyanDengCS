#include "question4.h"
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
		cout << "Enter the number of widgets sold. The value must be greater than 0: ";
		cin >> input;

        while(input <= 0)
        {
            cout << "Invalid input. Please enter a value greater than 0. \n";
            cin >> input;
        }
        
        result = get_earned_points(input);
		cout << "Points Earned " << result<<"\n";
		cout << "Do you wish to exit? (Type 'n' or 'N' to continue) ";
		cin >> choice;
		
	} while (choice == 'n' || choice == 'N');

    return 0;
}