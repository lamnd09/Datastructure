/* Author: Lam D. Nguyen
HackerEarth
You have been given an array A of size N consisting of positive integers. You need to find and print the product of all the number in this array Modulo .

Input Format:
The first line contains a single integer N denoting the size of the array. The next line contains N space separated integers denoting the elements of the array

Output Format:
Print a single integer denoting the product of all the elements of the array Modulo .

Constraints:

*/



#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N; cin >> N;
	int a[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	int answer = 1;
	for (int i = 0; i < N; i++) {
		int result = answer*a[i] % (pow(10,9) + 7)
	}
	cout << result;

	return 0;
}
