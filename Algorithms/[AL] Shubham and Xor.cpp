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
ou are given an array of n integer numbers , , .. ,. Calculate the number of pair of indices  such that  <  and  xor 

Input format
- First line: n denoting the number of array elements
- Second line: n space separated integers , , .. ,.

Output format
Output the required number of pairs.

Constraints 

 
*/

// Write your code here

#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,j,n,a;
	long long ans = 0;
	unordered_map<int, int> mp;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &a);
		mp[a]++;
		ans -= (1ll) * (mp[a] - 1) * (mp[a] - 2) / 2;
		ans += (1ll) * (mp[a]) * (mp[a] - 1) / 2;
	}
	printf("%lld\n", ans);
    return 0;
}
