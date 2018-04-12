/* Tree traverals */

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data; 
	struct node *left;
	struct node *right;
};

// Helper function that allocates a new node with the given data and NULL left and right pointers

struct node *newNode(int data) {
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data; 
	node->left = NULL;
	node->right = NULL;
	
	return node;
}

//postoder traverssal (left, right, root)
void printPostOrder(struct node* node) {
	if (node == NULL)
		return 0;
	
	//left subtree
	printPostOrder(node->left);
	printPostOrder(node->right);
	printf("%d", node->data);
}

//inorder traversal (left, root, right)
void printInOrder(struct node* node) {
	if (node == NULL)
		return 0; 

	printInOrder(node->left);
	printf("%d", node->data);
	printInOrder(node->right);
}

//PreOrder tree traversal, root, left rigt
void printPreOrder(struct node* node) {
	if (node == NULL)
		return 0; 

	printf("%d", node->data);
	printPreOrder(node->left);
	printPreOrder(node->right);
}

// main function 
int main() {
	struct node * root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	printf("\n Post Order: "); 
	printPostOrder(root);
	printf("\n In Order: ");
	printInOrder(root);
	printf("\n PreOrder: "); 
	printPreOrder(root);

	return 0;
}
