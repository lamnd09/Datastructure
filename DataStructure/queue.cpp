/* you are given a string. Take the first character of string and put it at the end of the string 
Find out what string will be after N steps
The String can bi considered as a queue. At each step, dequeue the character from the front and enqueue it at the end. 
Repeat this process N times*/

#include <iostream>
#include <cstdio>	

using namespace std;

void enqueue(char queue[], char element, int& rear, int arraySize) {
	if (rear == arraySize) { //queue is full
		cout << "Overflow\n";
	}
	else {
		queue[rear] = element; //Add the element to the back
		rear++;
	}
}

void dequeue(char queue[], int& front, int rear) {
	if (front == rear) // queue is empty
	{
		cout << "Underflow \n	";
	}
	else {
		queue[front] = 0; //delete the front element
		front++;
	}
}

char Front(char queue[], int front) {
	return queue[front];
}

int main() {
	char queue[20] = { 'a', 'b', 'c', 'd' };
	int front = 0, rear = 4;
	int arraySize = 20; 
	int N = 3; //number of steps

	char ch;

	for (int i = 0; i < N;++i ) {
		ch = Front(queue, front);
		enqueue(queue, ch, rear, arraySize);
		dequeue(queue, front, rear);
	}
	for (int i = front; i < rear; ++i) {
		cout << queue[i];
	}
	system("pause");
	return 0;
}
