/**************************
 * Jordan Simmons 10743844
 * 3600.001 Group 3
 * Reverse
 *************************/

#include "major1.h"

void reverse(unsigned int num) {
	int temp = num;
	unsigned int reverse_num = (num & 1);
	unsigned int count = 31;
	char binary[32];

	printf("\nThe number is: %u\n", num);
	for (int i = 1; i <= 32; i++) {
		if (temp % 2) {
			binary[32 - i] = '1';
		} else {
			binary[32 - i] = '0';
		}
		temp /= 2;
	}
	printf("The binary representation is: %s\n", binary);

	temp = num;

	temp >>= 1;
	while(temp) { // true while temp contains at least one TRUE bit (1)
		reverse_num <<= 1; // left shift stored bits

		// add on right most bit based on temp's right most bit
		reverse_num |= (temp & 1);

		temp >>= 1; // right shift temp
		count--; // increment count
	}
	reverse_num <<= count; // shift number of digits skipped as rest were 0's

	printf("\nThe reversed number is: %u\n", reverse_num);
	for (int i = 1; i <= 32; i++) {
		if (reverse_num % 2) {
			binary[32 - i] = '1';
		} else {
			binary[32 - i] = '0';
		}
                reverse_num /= 2;
        }
        printf("The binary representation is: %s\n\n", binary);
}

