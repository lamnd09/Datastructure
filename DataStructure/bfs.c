#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 5

struct Vertex {
	char label; 
	bool unvisited; 
};

//queue variables
int queue[MAX];
int rear = -1; 
int front = 0;
int queueItemCount =0;

//graph variables
//array of vertices
struct Vertex* lstVertices[MAX];

//adjacency matrix
int adjMatrix[MAX][MAX];

//vertex count 
int vertexCount=0;

//queue functions
void insert(int data){
	queue[++rear] = data;
	queueItemCount++;
}

int removeData(){
	queueItemCount--;
	return queue[front++];
}

bool isQueueEmpty(){
	return queueItemCount ==0;
}

// add vertex to the vertex list 
void addVertex(char label){
	struct Vertex* vertex = (struct Vertex*) malloc(sizeof(struct Vertex));
	vertex->label = label;
	vertex->unvisited = false;
	lstVertices[vertexCount++] = vertex;
}

//add edge to edge array
void addedge(int start, int end){
	adjMatrix[start][end] =1;
	adjMatrix[end][start]=1;
}

//display the vertex 
void displayVertex(int vertexIndex){
	printf("%c ", lstVertices[vertexIndex]->label);
}

//get the adjacent unvisited vertex
int getAdjUnvisitedVertex(int vertex Index){
	int i;
	for(i=0; i<vertexCount; i++){
		if(adjMatrix[vertexIndex][i]==1 && lstVertices[i]->visited ==false){
			return i;
		}
	}
	return -1;
}

void breadFrstSearch(){
	int i; 
	
	//mark first node as visited 
	lstVertices[0]->visited = true;
	
	//display the vertex
	displayVertex(0);
	
	//insert vertex index in queue
	insert(0);
	int unvisitedVertex;
	
	while(!isQueueEmpty()){
		//get the unvisited vetex which is at front of the queue
		int tempVertex = removeData();
		
		// no adjcent vertex found 
		while(unvisitedVdrtex = getAdjUnvisitedVertex(tempVertex) != -1 ){
			lstVdertices[unvisitedVertex]->visited = true;
			displayVertrex(unvisitedVertex);
			insert(unvisitedVertex);
			
		}
	}
	
	//queue is empty, search is complete, reset the visited flag
	for(i=0;; i<vertexCount; i++){
		lstVertices[i]->visited = false;
	}
}

int main(){
	int i, j;
	for(i=0; i<MAX; i++){
		for(j=0l j<MAX; j++){
			adjMatrix[i][j] =0;
		}
	}
	//add Vertex
	
	//add edge
	
	breadthFirsSearch();
	return 0;
}

