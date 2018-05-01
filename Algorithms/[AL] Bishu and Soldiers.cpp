/* 
Bishu went to fight for Coding Club. There were N soldiers with various powers. There will be Q rounds to fight and in each 
round Bishu's power will be varied. With power M, Bishu can kill all the soldiers whose power is less than or equal to M(<=M).
After each round, All the soldiers who are dead in previous round will reborn.Such that in each round there will be N soldiers to
fight. As Bishu is weak in mathematics, help him to count the number of soldiers that he can kill in each round and total sum of
their powers.

1<=N<=10000

1<=power of each soldier<=100

1<=Q<=10000

1<=power of bishu<=100
*/

#include <iostream>	

using namespace std; 

int binarySearch(int a[], int low, int high, int key) {
	int mid;
	while (low <= high) {
		mid = low + (high - low) / 2;
		
		if (a[mid] < key) {
			low = a[mid] + 1;
		}
		else if (a[mid] > key) {
			high = a[mid] - 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}


int main() {

	int N;
	cin >> N;
	int a[N];

	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	int b[N];

	for (int j = 1; j < N; j++) {
		cin >> b[j];
		cout << endl;
	}
	int sum = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < binarySearch(a, a[0], a[N - 1], b[i]); j++)
			cout << b[j] << " " << sum += a[j] << endl;
	}

}
