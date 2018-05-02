/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include <iostream>
#include <math.h>
using namespace std; 

int N;
int i, j;

void bubbleSort(int a[], int N) {
	int temp; 

	for (i=0; i < N -1 ; i++) {
		for (j = 0; j < N - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j + 1] = temp;

			}
		}	
	}
}

int linearSearch(int key, int N, int a[]) {
	for (int i = 0; i < N; i++) {
		if (a[i] == key) {
			return i;
		}
	}
	return -1;
}

int main() {
	int T; 
	cin >> T;
	int M;
	 
	
	while(T--){
	    
	    int minVal =0,  maxVal = 0;
		cin >> N >> M;
		int a[N];
		
		for (j = 0; j < N; j++) {
			cin >> a[j];
		}
		
		bubbleSort(a, N);

		int k ;
        k = N-M;
        
		for (int p = 0; p < k; p++) {
			minVal += a[p];
		}
		for (int t = N - k; t < N; t++) {
			maxVal += a[t];
		}
		cout<<maxVal - minVal;
		cout<<"\n";

	}
	
	return 0;
}

