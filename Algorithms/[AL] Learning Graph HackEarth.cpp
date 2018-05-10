/* Author: @lamnd09*/

/* Requirement:  

Monk once went to the graph city to learn graphs, and meets an undirected graph having N nodes, where each node have value  where . Each node of the graph is very curious and wants to know something about the nodes which are directly connected to the current node.

For each node, if we sort the nodes (according to their values), which are directly connected to it, in descending order (in case of equal values, sort it according to their indices in ascending order), then what will be the number of the node at  position, if positions are given starting from 1.

Note: If the values are same , then sort it

Now Graph gave this task to Monk. Help Monk for the same.

Input Format :

The first line will consist of 3 space separated integers N,M, k denoting the number of nodes, number of edges and value of k respectively.
In next line, there will be N space separated integers,  , where , denoting the value of  node.
In next M lines, each line contains 2 integers X and Y, representing an edge between X and Y.

Output Format
Print N lines, where  line contains the required node for the  node. If there is no such node, print 1.

Constraints: :


*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct data {
	int idx;
	int value;
};

struct data* createData(int idx, int value) {
	struct data *newData = (struct data*)malloc(sizeof(struct data));
	newData->idx = idx;
	newData->value = value;
	return newData;
}

bool func(const data&a, const data&b) {
	if (a.value == b.value) {
		return a.idx > b.idx;
	}
	return a.value > b.value;
}
int main()
{
	int N, M, k;
	cin >> N >> M >> k;

	vector<data> adj[N];
	int Value[N];
	for (int i = 0; i < N; i++) {
		cin >> Value[i];
	}
	int x, y;
	for (int i = 0; i < M; i++) {
		cin >> x >> y;
		struct data *X = createData(x, Value[x - 1]);
		struct data *Y = createData(y, Value[y - 1]);
		adj[x - 1].push_back(*Y);
		adj[y - 1].push_back(*X);
	}
	for (int i = 0; i < N; i++) {
		if (adj[i].size() >= k) {
			sort(adj[i].begin(), adj[i].end(), func);
			cout << (adj[i].at(k - 1)).idx << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
}
