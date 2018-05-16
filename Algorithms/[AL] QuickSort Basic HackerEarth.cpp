/* Author: Lam D. Nguyen 

You have been given an array A of size N.This array contains integers ranging from 1 to . You need to sort the contents of this array by their value and then print the contents of it.

Input Format:

The first line contains a single integers N denoting the size of the array. The next line contains N space separated integers denoting the contents of the array.

Output Format:

Print N space separated integers, i.e. the final sorted array.

Constraints:
*/

#include <iostream> 
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std; 

int partition(int a[], int start, int end) {
	int i = start + 1; 
	int piv = a[start];

	for (int j = start + 1; j <= end; j++) {
		if (a[j] < piv) {
			swap(a[i], a[j]);
			i += 1;
		}
		
	}

	swap(a[start], a[i - 1]);
	return i - 1;
}

void quick_Sort(int a[], int start, int end) {
	if (start < end) {
		int piv_pos = partition(a, start, end);
		quick_Sort(a, start, piv_pos - 1);
		quick_Sort(a, piv_pos +1, end);
	}
}


int main() {

		int n, i, j; cin >> n;
		int a[n];

		for (i = 0; i < n; ++i) {
			cin >> a[i];
		}
		

		quick_Sort(a, 0, n-1);

		for (j = 0; j < n; ++j) {
			cout << a[j] << " "; 
		}



	return 0; 
}

