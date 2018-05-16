/* Author: 1amND99 */

/*
You have been given an A array consisting of N integers. All the elements in this array are guaranteed to be unique. For each position i in the array A you need to find the position  should be present in, if the array was a sorted array. You need to find this for each i and print the resulting solution.

Input Format:

The first line contains a single integer N denoting the size of array A. The next line contains N space separated integers denoting the elements of array A.

Output Format:

Print N space separated integers on a single line , where the Ith integer denotes the position of  if this array were sorted.

Constraints:





*/
/* Author: 1amND99 */

#include <iostream>

using namespace std;


int main() {
	int n, x, minimum; cin >> n>>x;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}


	for (int i = 0; i < x; i++) {
		minimum = i;

		for (int j = i+1; j < n; j++) {
			if (a[j] < a[minimum]) {
				minimum = j;
			}
		}
		//swap(a[minimum], a[i]);
		int temp = a[minimum];
		a[minimum] = a[i];
		a[i] = temp;
	}
	
	for(int i =0; i<n; i++){
	    cout<<a[i]<<" ";
	}

	return 0;
}
