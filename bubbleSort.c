#include<stdio.h>
#include <stdbool.h>

#define MAX 23
int list[MAX] = {1,9,12,1,35,12,18,96,32,45,2,3,5,4,7,8,9,0,4,2,5,1,8};

void display() {
	int i;
	printf("[");
	
	//navigate through all items
	for (i = 0; i < MAX; i++) {
		printf(" %d - ", list[i]);
	}
	printf("]\n");
}

void bubbleSort() {
	int temp;
	int i, j;

	bool swapped = false; 

	//loop through all number
	for (i = 0; i < MAX - 1; i++) {
		swapped = false; 

		//loop through numbers falling ahead
		for (j = 0; j < MAX - 1 - i; j++) {
			printf(" \n Items compared: [%d ;  %d] ", list[j], list[j + 1]);

			//check if next number is less than current number 
			//swap the numbers
			//Bubble up the highest number
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;

				swapped = true; 
				printf("=> swapped [%d; %d]\n ", list[j], list[j + 1]);
			}
			else {
				printf("==> not swapped \n");
			}
		}

		// if no number was swapped that means  array is sorted, break the loop
		if (! swapped) {
			break;
		}
		printf("Interaction %d ", i + 1);
		display();
	}
}

int main() {
	printf("\n Input Array"); 
	display();

	bubbleSort();
	printf("\n Out put: "); 
	display();
}
