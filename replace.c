/*
Author: David Scott (dws0118)
Description: Replaces the bit of one value with the bit of a seperate value.
*/

#include "major1.h"

void replace(unsigned int val)
{
	unsigned int mask; // mask
	unsigned int bit_replace_pos; // bit replacement position
	
	// USER PROMPTS //
	printf("Enter a positive integer mask up to 3 billion: ");
	scanf("%u", &mask);
	
	// Check if value is less than 3 billion and positive
	while ((mask >= 3000000000) || (mask <= 0))
	{
		printf("Enter a positive integer mask up to 3 billion: ");
		scanf("%u", &mask);
	}
	
	printf("Enter the bit replacement position from mask (0-indexed): ");
	scanf("%u", &bit_replace_pos);
	
	// Check if value is between 31 and 0
	while ((bit_replace_pos > 31) || (bit_replace_pos < 0))
	{
		printf("Enter the bit replacement position from mask (0-indexed): ");
		scanf("%u", &bit_replace_pos);
	}
	
	// REPLACEMENT //
	// Get corresponding bit of mask
	int temp = (mask >> bit_replace_pos) & 1; // Bitwise AND of anything with 1 results in the same value

	// If bit at given position is 1
	if(temp == 1)
	{
		temp = temp << bit_replace_pos;
		val |= temp; // OR it together
	}
	// If bit at given position is 0
	else 
	{ 
		int flag = 4294967295; // All bit set to 1 (considering 32 bit)
		temp = 1 << bit_replace_pos;
		flag = flag ^ temp;
		val &= flag; // AND it together
	}

	printf("New integer with bit %u from mask %u is %u \n", bit_replace_pos, mask, val); //Print out answer
}