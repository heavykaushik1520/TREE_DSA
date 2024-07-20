#include<stdio.h>
#include<stdlib.h>

struct Node{
	char data;
	struct Node* left;
	struct Node* right;
	
	
};

struct Node* newNode(int data)
{
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data ;
	node->left = NULL ;
	node->right = NULL ;
	return node;
}

void preOrderTraversal(struct Node* node)
{
	if( node == NULL)
	{
		return;
	}
	printf("%c, ",node->data);
	preOrderTraversal(node->left);
	preOrderTraversal(node->right);
	
}

void main()
{
	struct Node* root = newNode('R');
	root->left = newNode('A');
	root->right = newNode('B');
	root->left->left = newNode('C');
	root->left->right = newNode('D');
	
	printf("Pre Order Traversal : ");
	preOrderTraversal(root);
	printf("\n");
	
	free(nodeB);
    free(nodeC);
    free(nodeD);
    free(nodeA);
    free(root);

	
}
