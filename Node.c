// Merkle Tree C
// Made by Ryan Michal
// 7/21/2018


#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#include "Node.h"

#include "md5.h"

/*
    node cases
        -make root
        -new leaf
        -delete leaf

        must recalculate after each add/subtract
*/

struct Node *make_root() {

    struct Node *root;
    //allocate memory
    root = (struct Node *) malloc (sizeof(struct Node));
    root->data = NULL;
    root->leftNode = NULL;
    root->rightNode = NULL;

    printf("\nnew node made");
    return root;
}

struct Node *new_node( char *incoming_data, int key) {

    //initalize and allocate memory
    struct Node *leaf = (struct Node *) malloc (sizeof(struct Node));
    
    leaf->data = incoming_data;
    leaf->leftNode = NULL;
    leaf->rightNode = NULL;

    printf("new node made");

    return leaf;
}

struct Node *insert(struct node* root, int key){
    if
}

void del_node(struct Node *node) {
    //dont delete root
    if( node->type != 0) {
        del_node(node->rightNode);
        del_node(node->leftNode);
        free( node );

        //need to recalculate
    }
}

void compare_trees(struct Node *node_one, struct Node *node_two) {
    if( strcmp(node_one->data,node_two->data) ) {
        printf("Trees are the same");
    } else  {
        printf("The tree has been changed");
    }
}



