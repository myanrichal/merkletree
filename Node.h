// #ifndef Node.h
// #define Node.h

struct Node {
    char* data;
    struct Node **leftNode;
    struct Node **rightNode;
};

// struct Node;
// struct Node *root;

/*

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

// #endif 