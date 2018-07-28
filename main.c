#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.c"
#include "md5.c"

void test();
// char *md(const char *str);
char *md(const char *str);


/*
    Steps to success

        Figure out where we are adding files from (need to add lots)
            -specific folder within project?  auto read all of them in and make nodes?

        
        Init tree
        Add children to tree
            recalculate hash on each add
        
*/


int main() {
    // test();


    int list_size = 16;   //TODO read the number of input files

    //declare list; give it some space
    struct Node* list[list_size];
    for(int i = 0; i < list_size+1; i++) {
       list[i] = (struct Node *) malloc (sizeof(struct Node));
    }



    list[0] = new_node( md("this is my 0") );
    list[1] = new_node( md("this is my 1") );
    list[2] = new_node( md("this is my 2") );
    list[3] = new_node( md("this is my 3") );
    list[4] = new_node( md("this is my 4") );
    list[5] = new_node( md("this is my 5") );
    list[6] = new_node( md("this is my 6") );
    list[7] = new_node( md("this is my 7") );
    list[8] = new_node( md("this is my 8") );
    list[9] = new_node( md("this is my 9") );
    
    list[10] = new_node( md("this is my 10") );
    list[11] = new_node( md("this is my 11") );
    list[12] = new_node( md("this is my 12") );
    list[13] = new_node( md("this is my 13") );
    list[14] = new_node( md("this is my 14") );
    list[15] = new_node( md("this is my 15") );
    // list[16] = new_node( md("this is my 16") );
    // list[17] = new_node( md("this is my 17") );
    // list[18] = new_node( md("this is my 18") );
    // list[19] = new_node( md("this is my 19") );

    // list[20] = new_node( md("this is my 20") );
    // list[21] = new_node( md("this is my 21") );
    // list[22] = new_node( md("this is my 22") );
    // list[23] = new_node( md("this is my 23") );
    // list[24] = new_node( md("this is my 24") );
    // list[25] = new_node( md("this is my 25") );
    // list[26] = new_node( md("this is my 26") );
    // list[27] = new_node( md("this is my 27") );
    // list[28] = new_node( md("this is my 28") );
    // list[29] = new_node( md("this is my 29") );




    //print inital values
    for(int i=0; i < list_size; i++) {
        printf("%d: %s\n", i, list[i]->data);
    }
    printf("Done written test data \n");



    //start program
    
    char* concatanate = (char *) malloc (64 * sizeof(char));
    char* encrypted = (char *) malloc (32 * sizeof(char));
    int number_of_loops = 0;


/// loop test ///

    printf("\n\n////////////Loop test///////////////\n\n");
    int n = 0; 

    while(list_size >= 2) {

        printf("\nlist_size: %d", list_size);
        n=0;

        ////////////// HANDLE LIST SIZE ///////////////
                    // DO THIS IF UNEVEN # OF NODES //
        if( list_size % 2 == 1 && list_size > 2) {
            printf("\nwe are uneven");
            strcpy( list[list_size]->data, list[list_size - 1]->data);
            list_size++;

                /////// PRINT NEW LIST IF NEEDED ///
            printf("\nlist_size with dup: %d\n\n", list_size);
            for(int i=0; i < list_size; i++) {
                printf("%d: %s\n", i, list[i]->data);
            }
        }

        

        printf("\nnew list_size: %d\n", list_size/2);
        ///////////// PERFORM REDUCTION ///////////////
        for(int i = 0; i < (list_size / 2); i++) {
            strcat( strcpy(concatanate, list[n]->data), list[n+1]->data );
            encrypted = md(concatanate);
            list[i]->data = encrypted;
            // printf("concat list: %s\n\n", list[i]->data);
            n = n + 2;
        }


        ///////////// PRINT ALL VALUES /////////////
        for(int i=0; i < list_size / 2; i++) {
            printf("%d: %s\n", i, list[i]->data);
        }


        /////////// set new list size //////////
        list_size = list_size / 2;
        number_of_loops++;
        printf("\n/////////////////END OF LOOP///////////////////////\n");
    }



    printf("\nfinished\nnumber_of_loop: %d\n", number_of_loops);















    // for(int i = 0; i < (list_size / 2); i++) {
    //     strcat( strcpy(concatanate, list[n]->data), list[n+1]->data );
    //     encrypted = md(concatanate);
    //     list[i]->data = encrypted;
    //     // printf("concat list: %s\n\n", list[i]->data);
    //     n = n + 2;
    // }
    // printf("print here \n");
    // for(int i=0; i < list_size / 2; i++) {
    //     printf("%d: %s\n", i, list[i]->data);
    // }

    // /* Handle List size
    //     Add new node if size is uneven
    // */
    // list_size = list_size / 2;
    // printf("\nlist_size: %d\n", list_size);

    // if( list_size % 2 == 1) {
    //     printf("\nwe are uneven\n");
    //     strcpy( list[list_size]->data, list[list_size - 1]->data);
    //     list_size++;
    //     //print new list
    //     printf("\nlist_size: %d\n\n", list_size);
    //     for(int i=0; i < list_size; i++) {
    //         printf("%d: %s\n", i, list[i]->data);
    //     }
    //     printf("\n");
    // }
    







    

    // printf("next layer\n");


    // n=0;
    // for(int i = 0; i < (list_size / 2); i++) {
    //     strcat( strcpy(concatanate, list[n]->data), list[n+1]->data );
    //     encrypted = md(concatanate);
    //     list[i]->data = encrypted;
    //     // printf("concat list: %s\n\n", list[i]->data);
    //     n = n + 2;
    // }
    // printf("print here \n");
    // for(int i=0; i < list_size / 2; i++) {
    //     printf("%d: %s\n", i, list[i]->data);
    // }

    // /* Handle List size
    //     Add new node if size is uneven
    // */
    // list_size = list_size / 2;
    // printf("\nlist_size: %d\n", list_size);

    // if( list_size % 2 == 1) {
    //     printf("\nwe are uneven\n");
    //     strcpy( list[list_size]->data, list[list_size - 1]->data);
    //     list_size++;
    //     //print new list
    //     printf("\nlist_size: %d\n\n", list_size);
    //     for(int i=0; i < list_size; i++) {
    //         printf("%d: %s\n", i, list[i]->data);
    //     }
    //     printf("\n");
    // }


    // printf("\n");





    // printf("\nnexter layer\n");


    // n=0;
    // for(int i = 0; i < (list_size / 2); i++) {
    //     strcat( strcpy(concatanate, list[n]->data), list[n+1]->data );
    //     encrypted = md(concatanate);
    //     list[i]->data = encrypted;
    //     // printf("concat list: %s\n\n", list[i]->data);
    //     n = n + 2;
    // }
    // printf("print here \n");
    // for(int i=0; i < list_size / 2; i++) {
    //     printf("%d: %s\n", i, list[i]->data);
    // }

    // /* Handle List size
    //     Add new node if size is uneven
    // */
    // list_size = list_size / 2;
    // printf("\nlist_size: %d\n", list_size);

    // if( list_size % 2 == 1) {
    //     printf("\nwe are uneven\n");
    //     strcpy( list[list_size]->data, list[list_size - 1]->data);
    //     list_size++;
    //     //print new list
    //     printf("\nlist_size: %d\n\n", list_size);
    //     for(int i=0; i < list_size; i++) {
    //         printf("%d: %s\n", i, list[i]->data);
    //     }
    //     printf("\n");
    // }



    // printf("\n");








    // printf("\nfinal layer\n");


    // n=0;
    // for(int i = 0; i < (list_size / 2); i++) {
    //     strcat( strcpy(concatanate, list[n]->data), list[n+1]->data );
    //     encrypted = md(concatanate);
    //     list[i]->data = encrypted;
    //     // printf("concat list: %s\n\n", list[i]->data);
    //     n = n + 2;
    // }
    // printf("print here \n");
    // for(int i=0; i < list_size / 2; i++) {
    //     printf("%d: %s\n", i, list[i]->data);
    // }

    // /* Handle List size
    //     Add new node if size is uneven
    // */
    // list_size = list_size / 2;
    // printf("\nlist_size: %d\n", list_size);

    // if( list_size % 2 == 1 && list_size > 2) {
    //     printf("\nwe are uneven\n");
    //     strcpy( list[list_size]->data, list[list_size - 1]->data);
    //     list_size++;
    //     //print new list
    //     printf("\nlist_size: %d\n\n", list_size);
    //     for(int i=0; i < list_size; i++) {
    //         printf("%d: %s\n", i, list[i]->data);
    //     }
    //     printf("\n");
    // }



    // printf("\n");









}



void test() {
    // struct Node root = &new_node_empty( "some text", 0);
    printf("hello world");

    char *a = "thiscanhavespaces";
    char *b = "thiscannothavespaces";

    // int length = strlen(a);

    // printf("\nLength Test\n\ta: %d\n\tb: %d", length, length);


    printf("\nA\n\tStr: %s\n\tLength: %d\n", a, strlen(a) );
    printf("\nb\n\tStr: %s\n\tLength: %d\n", b, strlen(b) );

    printf("\na: %s\n", md(a ) );
    printf("\nb: %s\n", md(b ) );
}



/* Alternative md function 
    // -made by todd - editted by ryan michal
    // -https://stackoverflow.com/questions/7627723/how-to-create-a-md5-hash-of-a-string-in-c
*/
char *md(const char *str) {
    int n;
    int length = strlen(str);
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
}
