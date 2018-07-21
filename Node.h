#ifndef Node.h
#define Node.h

struct Node {
    int height;     //helps to determine root or leaf
    data char[200];
    // enc char[128];   //md5 has 128 bits
    struct Node *leftNode;
    struct Node *rightNode;
};

// struct Node;
// struct Node *root;

void del_node( struct Node* );

struct Node *make_root();

struct Node  *new_node_empty( char[] , int );

void add 

struct node *search( int, struct *Node );



#endif 