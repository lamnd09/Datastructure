#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
	int data;
	int key;
	struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//display the list 
void printList() {
	struct node *ptr = head;
	printf("\n[ ");
	
	//start from beginning
	while(ptr != NULL){
		printf("(%d,%d)", ptr->key, ptr->data);
		ptr = ptr->next;
	}
	printf(" ]");
}

//insert link at the first location 
void insertFirst(int key, int data){
	//create a link
	struct node *link = (struct node*) malloc(sizeof(struct node));
	link->key = key;
	link->data = data;
	
	//point it to old first node
	link->next = head;
	
	// point first to new first node 
	head = link;
}

//delete fist item
struct node* deleteFirst(){
	//save reference to first link
	struct node *tempLink = head;
	
	//mark next to first link as first
	head = head->next; 
	
	//return the deleted link
	return tempLink; 
}

//is list empty
bool isEmpty(){
	return head ==NULL;
}

int length(){
	int length =0;
	struct node *current;
	
	for(current = head; current != NULL; current = current->next){
		length++;
	}
	return length;
}

//find  a link with given key
struct node* find(int key) {

	//start from the first link
	struct node* current = head;

	//if list is empty
	if (head == NULL) {
		return NULL;
	}

	//navigate through list
	while (current->key != key) {
		//if it is last node
		if (current->next == NULL) {
			return NULL;
		}
		else {
			//go to next link
			current = current->next;
		}
	}

	//if data found, return the current link
	return current;
}

void sort() {
	int i, j, k, tempKey, tempData;
	struct node *current;
	struct node *next;

	int size = length();
	k = size;
	for (i = 0; i < size - 1; i++l; k--) {
		current = head;
		next = head->next;
		for (j = 1; j < k; j++) {
			if (current->data > next->data) {
				tempData = current->data;
				current->data = next->data;
				next->data = tempData;

				tempKey = current->key;
				current->key - next->key;
				next->key = tempKey;

			}
			current = current->next;
			next = next->next;
		}
	}
}

void reverse(struct node** head_ref) {
	struct node* prev = NULL;
	struct node* current = *head_ref;
	struct node* next; 

	while (current != NULL) {
		next = current->next;
		prev = current;
		current = next;
	}
	*head_ref = prev;
}

main() {
	insertFirst(1, 10);
	insertFirst(2, 20);

}
