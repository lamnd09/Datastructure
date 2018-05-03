/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

You have been given an A array consisting of N integers. All the elements in this array are guaranteed to be unique. For each position i in the array A you need to find the position  should be present in, if the array was a sorted array. You need to find this for each i and print the resulting solution.

Input Format:

The first line contains a single integer N denoting the size of array A. The next line contains N space separated integers denoting the elements of array A.

Output Format:

Print N space separated integers on a single line , where the Ith integer denotes the position of  if this array were sorted.

Constraints:


*/

// Write your code here
#include <iostream>
using namespace std; 

void insertSort(int a[], int n) {
	
	for (int i = 0; i < n; i++) {
		int temp = a[i];
		int j = i;

		while (j > 0 && temp < a[j - 1]) {
			a[j] = a[j - 1];
			j = j - 1;
		}
		a[j] = temp;
	}
}


int main() {

	int n; 
	cin >> n;
	int a[n];
    int b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
	    b[i]=a[i];
//	    cout<<b[i]<<" ";
	}
//	cout<<" \n";

	insertSort(a, n);
	
///	for(int i=0; i<n; i++){
//	    cout<<a[i]<<" ";
//	}
//	cout<<" \n";
	
	for (int i = 0; i < n; i++) {
	    for(int j=0; j<n; j++){
	        if(b[i]==a[j])
	            cout<<j+1<<" "; 
	    }
	}

	return 0;
}
