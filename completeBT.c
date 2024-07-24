#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the TreeNode structure
typedef struct TreeNode
{
    char data[2];
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

// Function to create a new tree node
TreeNode *createTreeNode(const char *data)
{
    TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode));
    strcpy(newNode->data, data);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main()
{
    // Create nodes
    TreeNode *root = createTreeNode("R");
    TreeNode *nodeA = createTreeNode("A");
    TreeNode *nodeB = createTreeNode("B");
    TreeNode *nodeC = createTreeNode("C");
    TreeNode *nodeD = createTreeNode("D");
    TreeNode *nodeE = createTreeNode("E");
    TreeNode *nodeF = createTreeNode("F");
    TreeNode *nodeG = createTreeNode("G");

    // Build the tree
    root->left = nodeA;
    root->right = nodeB;

    nodeA->left = nodeC;
    nodeA->right = nodeD;

    nodeB->left = nodeE;
    nodeB->right = nodeF;

    nodeF->left = nodeG;

    // Test
    printf("root->right->left->data: %s\n", root->right->left->data);

    // Cleanup memory
    free(root);
    free(nodeA);
    free(nodeB);
    free(nodeC);
    free(nodeD);
    free(nodeE);
    free(nodeF);
    free(nodeG);

    return 0;
}
