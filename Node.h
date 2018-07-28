// #ifndef Node.h
// #define Node.h

struct Node {
    // int key;        //tells me if it is a root; duplicate; or leaf; how many children it has
    //                     // key = 2 - two free spots
    //                     // key = 1 - one free spot
    //                     // key = 0 - complete, no free spot
    // int height;
    char* data;
    struct Node **leftNode;
    struct Node **rightNode;
};

// struct Node;
// struct Node *root;

/*
   on start root  
                    root
                    /  \ 
    insert;
                    root
                    /  \
                L1       L1
    insert; rkey = 0; 
                    root
                    /  \
                L1       L2
    insert;
                     new root
                    /        \
                H1(oldroot)    L3
               /  \     
              L1   L2


    better idea          agree

    list
            Take pairs
    l1  \       h(1 2)
    l2  /               \       h(12 34)
                        /
    l3  \       h(3 4)                      \
    l4  /                                           h(tree)  <- this is the root

    l5  \       h(5 6)                      /
    l6  /               \       h(56 l7)
                        /
    l7  \      l7

*/

// struct Node *insert(struct node* root, int key)
// struct Node  *new_node( char*, int );
// void del_node( struct Node* );



// #endif 