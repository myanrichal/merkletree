// Merkle Tree C
// Made by Ryan Michal
// 7/21/2018


#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#include "Node.h"

#include "md5.h"

#define MD5_SIZE 32

/* new_node
*   create new node partition adaquite memory
*/

struct Node* new_node( char *incoming_data) {

    //initalize and allocate memory
    struct Node *leaf = (struct Node *) malloc (sizeof(struct Node));
    leaf->data = malloc (MD5_SIZE + 1 * sizeof (char));
    leaf->leftNode = malloc (sizeof (struct Node));
    leaf->rightNode = malloc (sizeof (struct Node));

    
    leaf->data = incoming_data;
    leaf->leftNode = NULL;
    leaf->rightNode = NULL;

    return leaf;
}



