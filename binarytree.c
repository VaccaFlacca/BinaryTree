#include "binarytree.h"
#include <stdlib.h>
#include <stdbool.h>

void initialize(binary_tree* bt){
    bt->root = malloc(sizeof(node));
        bt->size = 0;
}


//searches for a specific value in the binary tree
bool search(binary_tree* bt, int key)
{
    node *current = bt->root;
    while (current != NULL)
    {
        if (key == current->data)
        {
            return TRUE;
        }
        else if (key < current->data)
        {
            current = current->left;
        }
        else
        {
            current = current->right;
        }
    }
    return FALSE;
}

//Inserts a node holding int into the binary tree
void insert(binary_tree* bt, node item)
{
    if (bt->root == NULL)
    {
        bt->root = item;
        item->left = NULL;
        item->right = NULL;
    }
    else
    {
        node *current = bt->root;
        while (current != NULL)
        {
            if (item->data < current->data)
            {
                if (current->left == NULL)
                {
                    current->left = item;
                    current = NULL;
                }
                else
                {
                    current = current->left
                }
            }
            else
            {
                if (current->right == NULL)
                {
                    current->right = NULL;
                    current = NULL;
                }
                else
                {
                    current = current->right;
                }
            }
            item->left = NULL;
            item->right = NULL;
        }
    }
    
}

//Calls inorder to print out ints in numerical order
void printinorder(binary_tree* bt){
    inorder(bt->root);
}

//prints ints out in numerical order
void inorder(node* item)
{
    if (item == NULL)
    {
        return;
    }
    printinorder(item->left);
    printf("%d ", item->data);
    printinorder(item->right);
}

//Calls preorder
void printpreorder(binary_tree* bt){
    preorder(bt->root);
}

//Prints the root, then the left side of tree, then the right side of tree
void preorder(node* item)
{
    if (item == NULL){
        return;
    }
    printf("%d" , item->data);
    printpreorder(item->left);
    printpreorder(item->right);

}

//Calls postorder
void printpostorder(binary_tree* bt){
    postorder(bt->root);
}

//Prints the left side of tree, then the right side, then the root
void postorder(node* item){
    if(item == NULL){
        return;
    }
    printpostorder(item->left);
    printpostorder(item->right);
    printf("%d " , item->data);
    
}

int btsize(binary_tree* bt){
    node node = bt->root;
    if (node == NULL){
        return 0;
    }
    else{
        return(btsize(node->left) + 1 + btsize(node->right));
    }
}

int treeheight(node node){
    if (node == NULL){
        return 0;
    }
    else{
        int leftH = treeheight(node->left);
        int rightH = treeheight(node->right);
    }
    if (leftH > rightH){
        return(leftH+1);
    }
    else{
        return(rightH+1);
    }
}
