/* Author: @lamnd09*/

/* Requirement:  
Our Code Monk recently learnt about Graphs and is very excited!

He went over to the Graph-making factory to watch some freshly prepared graphs. Incidentally, one of the workers at the factory was ill today, so Monk decided to step in and do her job.

The Monk's Job is to Identify whether the incoming graph is a tree or not. He is given N, the number of vertices in the graph and the degree of each vertex.

Find if the graph is a tree or not.

Input:
First line contains an integer N, the number of vertices.
Second line contains N space-separated integers, the degrees of the N vertices.

Output:
Print "Yes" (without the quotes) if the graph is a tree or "No" (without the quotes) otherwise.

Constraints:
1 = N = 100
1 = Degreei = 1000

References:

*/

#include <iostream>
using namespace std; 

int main() {
	int n, sum=0; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// check whether the graph is tree or not; 
	// 
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}

	if (2 * (n - 1) == sum) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}
