/* Author: Lam D. Nguyen*/

#include <iostream>
#include <list>

using namespace std; 

class Graph {
	int V; //number of vertices
	
	// pointer to an array containing adjacency
	list <int> *adj;

public: 
	Graph(int V); //constructor
	
	void addEdge(int v, int w); //function to add an edge to graph
	void BFS(int s); //printf bfs
};

Graph::Graph(int V) {
	this->V = V; 
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w) {
	adj[v].push_back(w); //add w to v's list
}

void Graph::BFS(int s) {
	//mark all the vertices as not visited

	bool *visited = new bool[V];
	for (int i = 0; i < V; i++) {
		visited[i] = false;
	}
		//create a queue for BFS
		list<int> queue;

		//mark the current node as visited and enqueue it
		visited[s] = true; 
		queue.push_back(s);

		//'i' will be used to get all adjacent
		// vertice of a vertex
		list<int>::iterator i;

		while (!queue.empty()) {
			//Dequeue a vertex from queue and print it
			s = queue.front();
			cout << s << " ";
			queue.pop_front();

			// Get all adjacent vertices of the dequeued
			//vertex s. if a adjacent has not been visited
			//then mark it visited and enqueue it
			for (i = adj[s].begin(); i != adj[s].end; ++i) {
				if (!visited[*i]) {
					visited[*i] = true;
					queue.push_back(*i);
				}
			}

		}
}



int main() {




	return 0;
}

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v[100001];
	int nodes, x, y, level[100000], sum[10000];
	bool mark[100000];
	memset(mark, false, 100000);
	cin >> nodes;
	for (int i = 0; i<nodes - 1; i++)
	{
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	queue<int> q;
	int start = 1, c = 0;
	q.push(start);
	level[start] = 1;
	mark[start] = true;
	int i;
	cin >> i;
	while (!q.empty())
	{
		int p = q.front();
		q.pop();
		for (vector<int>::iterator it = v[p].begin(); it != v[p].end(); ++it)
		{
			if (mark[*it] == false)
			{
				level[*it] = level[p] + 1;
				if (level[*it] == i)c++;
				q.push(*it);
				mark[*it] = true;
			}
		}
	}
	cout << c << endl;
	return 0;
}