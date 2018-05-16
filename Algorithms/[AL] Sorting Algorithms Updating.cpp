/* Author: @lamnd09*/



#include <iostream>

using namespace std; 



/* Bubble sort is based on the idea of repeatly comparing pair of adjacent and then swapping their position*/

void bubble_Sort(int a[], int n) {
	int temp; 

	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

/* Selection Sort is based on the idea of finding the minimum or maximum element in an unsorted array and then putting it in its correct position in sorted array*/
void Selection_Sort(int a[], int n) {
	int minimum; 

	for (int i = 0; i < n - 1; i++) {
		minimum = i; 
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[minimum]) {
				minimum = j; 
			}
		}
		swap(a[minimum], a[i]);
	}
}


/* Insertion Sort is based on the idea that one element from the input elements is consumed in each iteration to find its correct position, the position to which it belongs in a sorted array*/

void insertion_Sort(int a[], int n) {
	for (int i = 0; i < n; i ++ ) {

		int temp = a[i];
		int j = i; 

		while (j > 0 && temp < a[j - 1]) {
			a[j] = a[j - 1];
			j = j - 1;
		}

		a[j] = temp;

	}

}

/* Merge Sort */

void merge(int a[], int start, int mid, int end) {
	int p = start, q = mid + 1; 

	int arr[end - start + 1], k = 0;

	for (int i = start; i < end; i++) {
		if (p > mid)
			arr[k++] = a[q++];
		else if (q > end)
			arr[k++] = a[p++];
		else if (a[p] < a[q])
			arr[k++] = a[p++];
		else
			arr[k++] = q[q++];
	}

	for (int p = 0; p < k; p++) {
		a[start++] = arr[p];
	}
}

void merge_Sort(int a[], int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		merge_Sort(a, start, mid);
		merge_Sort(a, mid + 1, end);

		merge_Sort(a, start, mid, end);
	}
}


/* Quick Sort*/



int main() {
	int T; cin >> T; 

	while (T--) {
		int N; cin >> N;

		int a[N];

		for (int i = 0; i < N; i++) {
			cin >> a[i];
		}

		bubble_Sort(a, N);


		int k=0;
		int min = a[0];
		for (int i = 0; i < N; i++) {
			if (min == a[i])
				k++;
		}

		if (k % 2 != 0)
			cout << "Lucky" << endl;
		else
			cout << "Unlucky" << endl;


	}

	return 0; 

}
