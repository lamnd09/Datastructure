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

		}
		
	}
}



int main() {




	return 0;
}