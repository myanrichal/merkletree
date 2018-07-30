// Merkle Tree C
// Made by Ryan Michal
// 7/21/2018


#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#include "Node.h"

#include "md5.h"

#define MD5_SIZE 32

/*
    node cases
        -make root
        -new leaf
        -delete leaf

        must recalculate after each add/subtract
*/



struct Node* new_node( char *incoming_data) {

    //initalize and allocate memory
    struct Node *leaf = (struct Node *) malloc (sizeof(struct Node));
    leaf->data = malloc (MD5_SIZE +1 * sizeof (char));
    leaf->leftNode = malloc (sizeof (struct Node));
    leaf->rightNode = malloc (sizeof (struct Node));

    
    leaf->data = incoming_data;
    leaf->leftNode = NULL;
    leaf->rightNode = NULL;

    return leaf;
}

// struct Node *insert(struct node* root, int key){
//     if
// }

// void del_node(struct Node *node) {
//     //dont delete root
//     if( node->type != 0) {
//         del_node(node->rightNode);
//         del_node(node->leftNode);
//         free( node );

//         //need to recalculate
//     }
// }

void compare_trees(struct Node *node_one, struct Node *node_two) {
    if( strcmp(node_one->data,node_two->data) ) {
        printf("Trees are the same");
    } else  {
        printf("The tree has been changed");
    }
}

int list_size(struct Node *current) {
    
}


