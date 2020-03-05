/*
Major Project 1
CSCE3600.001

Group 3:
Jacob Everett
Jarrett Mahone
David Scott
Jordan Simmons
*/
#include "major1.h"

int main() {
		
	int choice = -1;
		
	do {
		unsigned int input = 0;
		
		printf("Enter the menu option for the operation to perform:\n(1) POWER OF 2\n(2) REVERSE BITS\n(3) REPLACE BIT POSITION FROM MASK\n(4) PALINDROME\n(5) EXIT\n");
		scanf("%d", &choice);
		
		switch (choice)
		{
			case 1:  //Power of 2
				do {
					printf("Enter a positive integer less than 2 billion:");
					scanf("%u", &input);
				} while ((input < 1 || input > 1999999999));
				powerOfTwo(input);
				break;
			case 2:  //Reverse
				do {
					printf("Enter a positive integer less than 2 billion:");
					scanf("%u", &input);
				} while ((input < 1 || input > 1999999999));
				reverse(input);
				break;
			case 3:  //Replace
				do {
					printf("Enter a positive integer less than 2 billion:");
					scanf("%u", &input);
				} while ((input < 1 || input > 1999999999));
				replace(input);
				break;
			case 4:  //Palindrome
				do {
					printf("Enter a positive integer less than 2 billion:");
					scanf("%u", &input);
				} while ((input < 1 || input > 1999999999));
				palin(input);
				break;
			case 5:  //Exit
				printf("Program terminating, goodbye.\n");
				break;
			default:
				printf("Error, invalid option. Please try again.\n");
				break;
		}
	} while (choice != 5);
	
	return 0;
}
