#ifndef binarytree_h
#define binarytree_h
#include <stdbool.h>

typedef struct node_struct{
    int data;
    struct node_struct* left;
    struct node_struct* right;
}node;

typedef struct binary_tree{
    node* root;
    int size;
    int height;
}binary_tree;

void initialize(binary_tree* bt);
bool search(binary_tree* bt, int key);
void insert(binary_tree* bt, node item);
void printinorder(binary_tree* bt);
void inorder(node item);
void printpreorder(binary_tree* bt);
void preorder(node item);
void printpostorder(binary_tree* bt);
void postorder(node item);
int btsize(binary_tree* bt);
int treeheight(binary_tree* bt);

#endif
