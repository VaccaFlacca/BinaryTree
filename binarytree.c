#include "binarytree.h"

void initialize(binary_tree* bt){
    bt->root = malloc(sizeof(Node));
        bt->size = 0;
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
    return NULL;
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

void printinorder(binary_tree* bt){
    inorder(bt->root);
}

//not so sure about this one
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

void printpreorder(binary_tree* bt){
    preorder(bt->root);
}

void preorder(node* item)
{
    if (item == NULL){
        return;
    }
    printf("%d" , item->data);
    printpreorder(item->left);
    printpreorder(item->right);

}

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
