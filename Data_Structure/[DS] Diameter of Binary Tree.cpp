/* Author: Lam Nguyen*/

/* 
Given a binary tree which has T nodes, you need to find the diameter of that binary tree. The diameter of a tree is the number of nodes on the longest path between two leaves in the tree.


*/

#include <stdio.h>
#include <stdlib.h>

// A binary tree node has data, pointer to left child and a pointer to right child 

struct node {
	int data; 
	struct node *left, *right;
};

//fuction to create a new node of tree and returns pointer 
struct node* newNode(int data);

//return max of two integer 
int max(int a, int b);

// function to compute height of a tree
int height(struct node* node);

//fucntion to get diameter of a binary tree
int diamter(struct node* tree) {
	//base case where tree is empty
	if (tree == NULL)
		return 0;

	//get the height of left and right subtree
	int ldiameter = diameter(tree->left);
	int rdiameter = diamter(tree->right);

	//get the diameter of left and right subtrees
	
}





int max; //our diameter

		 //Assign maximum depth to each node
int query(node *ptr) {
	if (ptr) {
		ptr->lh = query(ptr->left);
		ptr->rh = query(ptr->right);
		if (ptr->lh + ptr->rh + 1 > max) {
			max = ptr->lh + ptr->rh + 1;
		}
		return (ptr->lh > ptr->rh ? ptr->lh : ptr->rh) + 1;
	}
	else
		return 0;
}

int main() {
	max = INT_MIN;
	node *root = NULL, *ptr;

	int n, x, i;
	scanf("%d %d", &n, &x);
	root = getNode(x);
	char str[12345];

	while (--n) {
		scanf("%s", str);
		i = 0;
		ptr = root;
		while (str[i] && ptr) {
			if (str[i] == 'L') {
				if (ptr->left == NULL)
					ptr->left = getNode(0);
				ptr = ptr->left;
			}
			else {
				if (ptr->right == NULL)
					ptr->right = getNode(0);
				ptr = ptr->right;
			}
			i++;
		}
		scanf("%d", &x);
		ptr->val = x;
	}
	query(root);
	printf("%d", max);
	return 0;
}
