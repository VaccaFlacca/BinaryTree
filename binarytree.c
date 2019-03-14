#include "binarytree.h"

void initialize(binary_tree* bt){
    
}

node search(binary_tree* bt, int key)
{
    node current = bt->root;
    while (current != NULL)
    {
        if (key == current->data)
        {
            return current;
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
    return NULL:
}

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
        node current = bt->root;
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

//not so sure about this one
void printinorder(node item)
{
    if (item == NULL)
    {
        return;
    }
    printinorder(item->left);
    printf("%d ", item->data);
    printinorder(item->right);
    printf("%d ", item->data);
}

void printpreorder(node item)
{
    

}

void printpostorder(binary_tree* bt){
    
}

int btsize(binary_tree* bt){
    node node = bt->root;
    if (node==NULL){
        return 0;
    }
    else{
        return(btsize(node->left) + 1 + btsize(node->right));
    }
}

int treeheight(binary_tree* bt){
    
}
