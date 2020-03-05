/*
 * Jarrett Mahone
 * CSCE 3600-01
 * Palindrome 
 */

#include "major1.h"


int palin(unsigned int num) 
{	
	//Initialize variables
	//int num = 0;
	int temp;
	bool isPalin = true, lBit, rBit;
	int n32 = sizeof(num)*8;
	
	/*
	//Prompt for Input, %u = unsinged integer, Do while loop to make sure the choice is within the range	
	do {
	printf("Enter a positive integer less than 2 billion: ");
	scanf("%d", &num);
	} while(num <= 0 || num >= 2000000000);
	*/


	//calculate the binary portion, 32 bits
	printf("The binary representation is: ");
	for(int i=31;i>=0;i--)
	{
		//The >> moves the cursor down the binary of "num", which is stored in the system. 
		temp=num >> i;
		//If the cursor is on a 1 then output 1, if its on a 0 output 0
		if(temp & 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	
	//Find if its a palindrome, reset temp to be 32
    for (int i=0; i<n32/2; i++) 
	{
		//Leftmost bit is the first digit moved left by the (Max amount(32)-1-(how many loops)), then AND it to num
        lBit = ((1<<n32-1-i)&num);
		//printf("%d", lBit); //test code
		//Rightmost is simply set on first digit and move left by how many loops there have been, then AND it to num
        rBit = ((1<<i)&num);
		//printf("%d\n", rBit); //test code
		//compare Leftmost Bit and Rightmost Bit, if their not equal then its not a palindrome.
        if (lBit != rBit) {
            isPalin = false; 
            break;
        }
    }

	if(isPalin == true)
		printf("%d is a Palindrome\n", num);
	else
		printf("%d is not a Palindrome\n", num);

	return 0;
}

