/* Author: @lamnd09*/

/* Requirement:  

The Monk wants to buy some cities. To buy two cities, he needs to buy the road connecting those two cities. Now, you are given a list of roads, bought by the Monk. You need to tell how many cities did the Monk buy.

Input:
First line contains an integer T, denoting the number of test cases. The first line of each test case contains an integer E, denoting the number of roads. The next E lines contain two space separated integers X and Y, denoting that there is an road between city X and city Y.

Output:
For each test case, you need to print the number of cities the Monk bought.

Constraint:
1 <= T <= 100
1 <= E <= 1000
1 <= X, Y <= 10000



*/

#include <iostream>
#include <vector>
#include <set>

using namespace std; 

int main() {
	int T; cin >> T;

	while (T--) {
		int E, x, y; cin >> E;
		
		set <int> s;

		for (int i = 0; i < E; ++i) {
			cin >> x >> y;
			s.insert(x);
			s.insert(y);
		}

		cout << s.size() << endl;
	}
	return 0;

}
