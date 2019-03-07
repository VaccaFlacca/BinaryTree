
typedef struct node_struct{
    int data;
    struct node_struct* left;
    struct node_struct* right;
}node;

typedef struct bt{
    node* root;
    int size;
    int height;
}bt;
