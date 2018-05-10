/* Author: @lamnd09*/

/* Requirement:  

*/

#include <iostream>
#include <algorithm>
using namespace std; 

void heapify(int a[], int n, int i) {
	int largest = i; //initialize largest as root
	int l = 2 * i + 1; //left = 2i +1
	int r = 2 * i + 2; //right = 2i+2


	//if left child is larger than root 
	if (l < n &&  a[l]>a[largest])
		largest = l;

	//if right child is larger than largest
	if (r<n && a[r]>a[largest])
		largest = r;

	//if largest is not root 
	if (largest != i) {
		swap(a[i], a[largest]);
		heapify(a, n, largest);
	}
}

void heapSort(int a[], int n) {
	//build heap(rearrange array
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(a, n, i);

	//one by one extract an element from heap
	for (int i = n - 1; i >= 0; i--) {
		swap(a[0], a[i]);
		heapify(a, i, 0);
	}
}

int main() {
	int T; cin >> T; 
	//int x; cin >> x;
	int x; 

	while (t--) {
		for (int i = 0; i < x; i++) {
			if (i < 3) {
				return -1;
			}

		}

	}



	return 0;


}
