#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.c"
#include "md5.c"

void test_hash();
void test_input(int, char const*[]);
char *md(const char *str);
const char* getfield(char* line, int num);



int main(int argc, char const *argv[]) {

    // CALL TESTS
    // test_hash();
    // test_input(argc, argv);
    //////
    
    int entry = atoi(argv[1]);
    char fname[256];
    strcpy(fname, argv[2]);

    int full_list = entry;
    int list_size = full_list;   //TODO read the number of input files

    //declare list; give it some space
    struct Node* list[list_size];
    for(int i = 0; i < list_size+1; i++) {
       list[i] = (struct Node *) malloc (sizeof(struct Node));
    }


    //READ IN INPUTS

    FILE* stream = fopen(fname, "r");

    char line[1024];
    while (fgets(line, 1024, stream))
    {
        char* tmp = strdup(line);
        const char s[2] = ",";
        char *token = strtok(tmp, s); 
        char *buffer = NULL;
        int i = 0;

        while (token != NULL) {
            //print manifest entry
            printf( "--- %s\n", token);

                FILE *fptr;
                char c;
                int string_size, read_size;
                
                //open file from manifest
                fptr = fopen(token, "r");
                if (fptr == NULL){
                    printf("Cannot open file \n");
                    exit(0);
                }


                //Write contents of text file to string
                    /*  TEST 3 code by
                    *   -code by lfzawacki
                    *   -adapted and implemented by ryan michal
                    *   -https://stackoverflow.com/questions/3463426/in-c-how-should-i-read-a-text-file-and-print-all-strings#
                    */

                    // Seek the last byte of the file
                    fseek(fptr, 0, SEEK_END);
                    // Offset from the first to the last byte, or in other words, filesize
                    string_size = ftell(fptr);
                    // go back to the start of the file
                    rewind(fptr);

                    // Allocate a string that can hold it all
                    buffer = (char*) malloc(sizeof(char) * (string_size + 1) );

                    // Read it all in one operation
                    read_size = fread(buffer, sizeof(char), string_size, fptr);

                    // fread doesn't set it so put a \0 in the last position
                    // and buffer is now officially a string
                    buffer[string_size] = '\0';

                    if (string_size != read_size)
                    {
                        // Something went wrong, throw away the memory and set
                        // the buffer to NULL
                        free(buffer);
                        buffer = NULL;
                    }


                    printf("%s\n", buffer);
                    printf("hashed: %s\n", md(buffer));

                    //create new node with file contents
                    list[i] = new_node( md(buffer) );

                    fclose(fptr);

            printf("\n\n");
            i++;
            token = strtok(NULL, s);
        }
        free(tmp);
    }
    fclose(stream);
    printf("Finshed Entry\n\n\n");



    // list[0] = new_node( md("miss is my 00") );
    // list[1] = new_node( md("this is my 01") );
    // list[2] = new_node( md("this is my 02") );
    // list[3] = new_node( md("this is my 03") );
    // list[4] = new_node( md("this is my 04") );
    // list[5] = new_node( md("this is my 05") );
    // list[6] = new_node( md("this is my 06") );
    // list[7] = new_node( md("this is my 07") );
    // list[8] = new_node( md("this is my 08") );
    // list[9] = new_node( md("this is my 09") );

    // list[10] = new_node( md("this is my 10") );
    // list[11] = new_node( md("this is my 11") );
    // list[12] = new_node( md("this is my 12") );
    // list[13] = new_node( md("this is my 13") );
    // list[14] = new_node( md("this is my 14") );
    // list[15] = new_node( md("this is my 15") );
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

    // list[30] = new_node( md("this is my 20") );
    // list[31] = new_node( md("this is my 21") );
    // list[32] = new_node( md("this is my 22") );
    // list[33] = new_node( md("this is my 23") );
    // list[34] = new_node( md("this is my 24") );
    // list[35] = new_node( md("this is my 25") );
    // list[36] = new_node( md("this is my 26") );
    // list[37] = new_node( md("this is my 27") );
    // list[38] = new_node( md("this is my 28") );
    // list[39] = new_node( md("this is my 29") );

    // list[40] = new_node( md("this is my 20") );
    // list[41] = new_node( md("this is my 21") );
    // list[42] = new_node( md("this is my 22") );
    // list[43] = new_node( md("this is my 23") );
    // list[44] = new_node( md("this is my 24") );
    // list[45] = new_node( md("this is my 25") );
    // list[46] = new_node( md("this is my 26") );
    // list[47] = new_node( md("this is my 27") );
    // list[48] = new_node( md("this is my 28") );
    // list[49] = new_node( md("this is my 29") );


    //print inital values

    for(int i=0; i < list_size; i++) {
        printf("%d: %s\n", i, list[i]->data);
    }
    printf("Done written test data \n");



    //start program
    
    char* concatanate = (char *) malloc (64 * sizeof(char));
    char* encrypted = (char *) malloc (32 * sizeof(char));
    int number_of_loops = 0;
    int n = 0; 

    printf("\n\n//////////// Hashing Start ///////////////\n\n");

    while(list_size >= 2) {

        printf("\nlist_size: %d", list_size);
        printf("\n---THIS IS LOOP: %d", number_of_loops);
        n=0;

    /////////////// HANDLE LIST SIZE ///////////////
        // do this if uneven # of nodes
        if( list_size % 2 == 1 && list_size > 2) {
            printf("\nwe are uneven\n");

            if(list_size == full_list) {
                printf("need new\n");
                list[list_size] = new_node( md("thirteencharc") );
            }
            
            strcpy( list[list_size]->data, list[list_size - 1]->data);
            list_size++;

            printf("\nlist_size with dup: %d\n\n", list_size);
            for(int i=0; i < list_size; i++) {
                printf("%d: %s\n", i, list[i]->data);
            }
        }

    ///////////// PERFORM REDUCTION ///////////////
        printf("\nnew list_size: %d\n", list_size/2);

        for(int i = 0; i < (list_size / 2); i++) {
            strcat( strcpy(concatanate, list[n]->data), list[n+1]->data );
            encrypted = md(concatanate);
            list[i]->data = encrypted;
            n = n + 2;
        }

        // print all values
        for(int i=0; i < list_size / 2; i++) {
            printf("%d: %s\n", i, list[i]->data);
        }


        // set new list size
        list_size = list_size / 2;
        number_of_loops++;
        printf("\n/////////////////END OF LOOP///////////////////////\n");



    }

    printf("\n\nFinished!\nNumber_of_loops: %d\n", number_of_loops);
    printf("Tree Root Hash: %s\n", list[list_size-1]->data);

}


void test_input(int argc, char const *argv[]) {

    printf("hello world\n");
    
    int entry = atoi(argv[1]);
    char fname[256];
    strcpy(fname, argv[2]);
    printf("number of items: %d\n", entry);

    //TEST ONE open file
            printf("test open\n");
            FILE *file;
            char c;
            file = fopen("files\\test1.txt", "r");
            if (file == NULL) {
                printf("cannot open your test file");
            }
            c = fgetc(file);
            printf("\t");
            while(c != EOF) {
                printf("%c", c);
                c = fgetc(file);
            }
            fclose(file);
            printf("\nfinished test 1 \n\n\n");
    //TEST ONE finished


    //TEST TWO open file from manifest.csv

    FILE *stream;
    stream = fopen(fname, "r");

    char line[1024];
    while (fgets(line, 1024, stream))
    {
        char* tmp = strdup(line);
        const char s[2] = ",";
        char *token = strtok(tmp, s); 
        char *buffer = NULL;

        while (token != NULL) {
            //print manifest entry
            printf( "--- %s\n", token);

                FILE *fptr;
                char c;
                int string_size, read_size;
                
                //open file from manifest
                fptr = fopen(token, "r");
                if (fptr == NULL){
                    printf("Cannot open file \n");
                    exit(0);
                }


                //TEST 3 write contents of text file to string
                    /*  TEST 3 code by
                    *   -code by lfzawacki
                    *   -adapted and implemented by ryan michal
                    *   -https://stackoverflow.com/questions/3463426/in-c-how-should-i-read-a-text-file-and-print-all-strings#
                    */

                    // Seek the last byte of the file
                    fseek(fptr, 0, SEEK_END);
                    // Offset from the first to the last byte, or in other words, filesize
                    string_size = ftell(fptr);
                    // go back to the start of the file
                    rewind(fptr);

                    // Allocate a string that can hold it all
                    buffer = (char*) malloc(sizeof(char) * (string_size + 1) );

                    // Read it all in one operation
                    read_size = fread(buffer, sizeof(char), string_size, fptr);

                    // fread doesn't set it so put a \0 in the last position
                    // and buffer is now officially a string
                    buffer[string_size] = '\0';

                    if (string_size != read_size)
                    {
                        // Something went wrong, throw away the memory and set
                        // the buffer to NULL
                        free(buffer);
                        buffer = NULL;
                    }


                    printf("%s\n", buffer);
                    printf("hashed: %s\n", md(buffer));

                    fclose(fptr);
                //TEST 3 finished


        //Back too end of TEST 2 code
            printf("\n\n");
            token = strtok(NULL, s);
        }
        free(tmp);
    }
    fclose(stream);
    printf("Finshed Test");
}

void test_hash() {
    printf("hello world\n");

    char *a = "some text here";
    char *b = "other text here";

    printf("\nA:\tStr: %s\n", a);
    printf("\nB:\tStr: %s\n", b );

    printf("\na: %s\n", md(a ) );
    printf("\nb: %s\n", md(b ) );
}



/*  md hashing function 
     -made by todd - edited by ryan michal
     -https://stackoverflow.com/questions/7627723/how-to-create-a-md5-hash-of-a-string-in-c
*/
char *md(const char *str) {
    int n;

    int length = strlen(str);
    // printf("length: %d", length);
    // int length = 13;

    MD5_CTX c;
    unsigned char digest[16];
    char *out = (char*)malloc(33);

    //initalize process
    MD5_Init(&c);

    //computer md5 hash from contents
    while (length > 0) {
        if (length > 512) {
            MD5_Update(&c, str, 512);
        } else {
            MD5_Update(&c, str, length);
        }
        length -= 512;
        str += 512;
    }

    // copmles hash; generates final hash value
    MD5_Final(digest, &c);

    for (n = 0; n < 16; ++n) {
        // printf("n=%d:out=--------------------%s\n", n, out);
        snprintf(&(out[n*2]), 16*2, "%02x", (unsigned int)digest[n]);
    }

    return out;
}
