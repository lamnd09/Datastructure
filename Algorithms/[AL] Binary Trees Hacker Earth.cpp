#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct node {
	int val, lh, rh;
	struct node *left, *right;
}node;

//Allocates new nodes
node *getNode(int val) {
	node *ret = (node*)calloc(1, sizeof(node));
	ret->val = val;
	return ret;
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
		ptr=root;
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
