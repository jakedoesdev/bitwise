/*
Author:  Jacob Everett jae0204
Description: This function determines whether or not an integer is a power of 2.
*/

#include "major1.h"

void powerOfTwo(unsigned int input)
{
	//if input anded with input - 1 is 0, input is a power of 2 
	if ((input & (input - 1)) == 0)
	{
		printf("%d is a power of 2\n", input);
	}
	else
	{	
		int next = 1;
		printf("%d is not a power of 2\n", input);
		
		while (next < input)
		{
			
			//starting from 1, next is leftshifted by 1 (1 10 100 1000 10000...)
			//until it is larger than input. This will be the next highest power of 2.
			next <<= 1;
		}
		
		printf("Next higher integer that is a power of 2 is: %d\n", next);	
	}
}
