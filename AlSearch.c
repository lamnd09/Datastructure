#include <stdio.h>

#define MAX 20

// Array: 
int intArray[MAX] = { 1,2,3,4,6,7,9,11,12,14,15,16,17,19,33,34,43,45,55,66 };

void printline(int count) {
	int i; 
	for (i = 0; i < count - 1; i++) {
		printf("=");
	}
	printf("=\n");
}

int binarySearch(int data) {
	int lowerBound = 0;
	int upperBound = MAX - 1;
	int midPoint = -1;
	int comparison = 0;
	int index = -1;
	
	while (lowerBound <= upperBound) {
		printf("Comparison: %d\n", comparison - 1);
		printf("lowerBound: %d , intArray[%d] = %d\n", lowerBound, lowerBound, intArray[lowerBound]);
		printf("upperBound: %d , intArray[%d] = %d\n", upperBound, upperBound, intArray[upperBound]);
		comparison++;

		//Compute the midpoint
		midPoint = (upperBound + lowerBound) / 2;

		//data found 

		if (intArray[midPoint] == data) {
			index = midPoint;
			break;
		}
		else
		{
			// if data is large 
			if (intArray[midPoint] < data) {
				lowerBound = midPoint + 1;
			}
			else {
				upperBound = midPoint + 1;
			}
		}
	}
	printf("\n Total comparison made: %d", comparison);
	return index;
}

void display() {
	int i;
	printf("[");

	//navigate through all items
	for (i = 0; i < MAX; i++) {
		printf("%d ", intArray[i]);
	}
	printf("]\n");
}

main() {
	printf("Input Array: ");
	display();
	printline(50);

	//find the location of 1
	int location = binarySearch(55);

	//if element was found 
	if (location != -1) {
		printf("\n element at: %d ", location + 1);

	}
	else {
		printf("\n element not found");
	}
}
