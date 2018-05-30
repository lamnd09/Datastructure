/* Author: Lam D. Nguyen*/

/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
You have been given 3 integers - l, r and k.Find how many numbers between l and r(both inclusive) are divisible by k.You do not need to print these numbers, you just have to find their count.

Input Format
The first and only line of input contains 3 space separated integers l, r and k.

Output Format
Print the required answer on a single line.

Constraints

// Write your code here


#include <iostream>

using namespace std;

int main() {
	int l, r, k;
	cin >> l >> r >> k;
	int count = 0;
	for (int i = l; i <= r; i++) {
		if (i%k == 0) {
			count++;
		}
	}
	cout << count;



	return 0;

}