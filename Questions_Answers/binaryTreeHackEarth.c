#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct node {
	int val, rh, lh; 
	struct node *left, *right;
}node;

// allocates new nodes
node *getNode(node *ptr) {
	node *ret = (node*)calloc(1, sizeof(node));
	ret->val = val;
	return ret;
}

int max; // diameter

// assign maximum depth to each node 
int query(node *ptr) {
	if (ptr) {
		ptr->lf = query(ptr->left);
		ptr->rf = query(ptr->rh);
		if (ptr->rh + ptr->lf + 1 > max)
			max = ptr->rh + ptr->lh + 1;
		return (ptr->lh > ptr->rh ? ptr->lh : ptr->rh) + 1; 
	}
	else {
		return 0;
	}
}

int main() {
	max = 0; 

	node *root = NULL, *ptr; 
	int t, x, i;

	scanf("%d %d", &t, &x);

	root = getNode(x);
	char str[12345];

	while (--t) {
		scanf(" %s", str);
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
