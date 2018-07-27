#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.c"
#include "md5.c"

void test();
char *md(const char *str);



/*
    Steps to success

        Figure out where we are adding files from (need to add lots)
            -specific folder within project?  auto read all of them in and make nodes?

        




        Init tree
        Add children to tree
            recalculate hash on each add
        

        Node Structure
            -hash
            -isLeaf?
            -left child
            -right child



*/
int main() {
    test();




    
}

/*  char *md()     
        -returns md5 hashed string
        *str - input string
*/
char *md(const char *str) { 
    int n;
    MD5_CTX c;
    unsigned char digest[16];
    char *out = (char*)malloc(33);
    
    MD5_Init(&c);
    MD5_Update(&c, str, sizeof(str));
    MD5_Final(digest, &c);

    for (n = 0; n < 16; ++n) {
        snprintf(&(out[n*2]), 16*2, "%02x", (unsigned int)digest[n]);
    }
    return out;
}


void test() {
    // struct Node root = &new_node_empty( "some text", 0);
    printf("hello world");

    char *a = "this test";
    char *b = "this test";

    // int length = strlen(a);

    // printf("\nLength Test\n\ta: %d\n\tb: %d", length, length);


    printf("\nA\n\tStr: %s\n\tLength: %d\n", a, strlen(a) );
    printf("\nb\n\tStr: %s\n\tLength: %d\n", b, strlen(b) );

    printf("\na: %s\n", md(a));
    printf("\nb: %s\n", md(b));
}



/* Alternative md function 
    // -made by todd
    // -https://stackoverflow.com/questions/7627723/how-to-create-a-md5-hash-of-a-string-in-c

char *str2md5(const char *str, int length) {
    int n;
    MD5_CTX c;
    unsigned char digest[16];
    char *out = (char*)malloc(33);

    MD5_Init(&c);

    while (length > 0) {
        if (length > 512) {
            MD5_Update(&c, str, 512);
        } else {
            MD5_Update(&c, str, length);
        }
        length -= 512;
        str += 512;
    }

    MD5_Final(digest, &c);

    for (n = 0; n < 16; ++n) {
        snprintf(&(out[n*2]), 16*2, "%02x", (unsigned int)digest[n]);
    }

    return out;
*/