#include <stdio.h>

//buffer overflow via pointer example

int main() {
	//array of five ints
	int array[5] = {0};
	// Pointer to the first element of the array
	int *p = array;

	//incorrect loop boundary leads to buffer overflow
	for (int i = 0; i <= 5; i++) {
		//expected to assign values from 0 to 50 into the array
		*p = i * 10;
		//increment pointer to next element
		p++;	
	}

	for (int j = 0; j < 5; j++) {
		printf("%d ", array[j]);
	}

    return 0;
}

