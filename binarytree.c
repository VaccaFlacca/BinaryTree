


void initialize(binary_tree* bt){
    
}

bool search(binary_tree* bt, int key){
    
    
    
}

void insert(binary_tree* bt, node item)
{
    if (bt->root == NULL)
    {
        tree->root = item;
        item->left = NULL;
        item->right = NULL;
    }
    else 
    {
        node current = tree->root;
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
    
}

void printpreorder(binary_tree* bt){
    
}

void printpostorder(binary_tree* bt){
    
}

int btsize(binary_tree* bt){
    
}

int treeheight(binary_tree* bt){
    
}
