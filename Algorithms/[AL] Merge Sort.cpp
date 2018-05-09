/* Author: @lamnd09*/

/* Requirement:  

*/

#include <iostream>
using namespace std; 

int count = 0; 

void merge(int a[], int start, int mid, int end) {
	int p = start, q = mid + 1;

	int arr[end - start + 1], k = 0; 

	for (int i = start; i <= end; i++) {
		if (p > mid) {
			count++;
			arr[k++] = a[q++];

		}
			
		else if (q > end)
			arr[k++] = a[p++];
		else if (a[p] < a[q]) {
			arr[k++] = a[p++];
			count++;
		}
			
		else
			arr[k++] = a[q++];

	}

	for (int p = 0; p < k; p++) {
		a[start++] = arr[p];
	}
}

void mergeSort(int a[], int start, int end) {
	if (start < end) {
		int mid = start + (end - start) / 2;

		mergeSort(a, start, mid);
		mergeSort(a, mid + 1, end);

		merge(a, start, mid, end);
	}
}


int main() {
	int n=5; cin >> n;
	
	

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";

	mergeSort(a, 0, n-1);

	cout << count;
	
	system("pause");
	return 0;

}
