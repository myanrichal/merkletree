// Merkle Tree C
// Made by Ryan Michal
// 7/21/2018


#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#include "Node.h"

#include "md5.h"


struct Node* make_root() {

    struct Node *root;
    //allocate memory
    root = (struct Node *) malloc (sizeof(struct Node));
    root->data = NULL;
    root->height = 1;
    root->leftNode = NULL:
    root->rightNode = NULL;

    println("new node made");
    return root;
}

struct Node* new_node_empty( char[] incoming_data, int height) {

    struct Node *leaf;
    //allocate memory
    leaf = (struct Node *) malloc (sizeof(struct Node));
    leaf->data = incoming_data;
    leaf->leftNode = NULL:
    leaf->rightNode = NULL;

    println("new node made");


    //dont just return we need to calculate tree here

    //

    return leaf;
}

void del_node(struct Node *node) {
    if( node->key != 0) {
        del_node(node->rightNode);
        del_node(node->leftNode);
        free( node );
    }
}

void compare_trees(struct Node *node_one, struct Node *node_two) {
    if(node_one->enc == node_two->enc) {
        println("Trees are the same");
    } else  {
        println("The tree has been changed");
    }
}



