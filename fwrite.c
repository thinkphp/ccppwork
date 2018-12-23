/*
 *  How to write using fwrite. 
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define FOUT "accounts.out"

struct Customer {

       char fname[20],
            lname[20];
       int acc_num;
       float acc_balance; 
};

int main(int argc,char **argv) {
 
    FILE *outFile;  
    struct Customer input;

    //open accounts file for writing.

    outFile = fopen(FOUT,"w+");        

    if( outFile == NULL ) {

        fprintf(stderr, "\nError opening file!\n\n");
        exit(1);
    }

    //instructions to user
    while(1) {

        printf("\nFirst Name");
        scanf("%s",input.fname);

        if(strcmp(input.fname, "stop") == 0) exit(1);
         
        printf("\nLast Name");
        scanf("%s",input.lname);

        printf("Acc Num");
        scanf("%d", &input.acc_num);

      
        printf("\nAcc balance");
        scanf("%f",&input.acc_balance);

        //write entire structure to accounts file 
        //fwrite(&input, sizeof(struct Customer), 1, outFile);
    } 
      


struct student
{
    char name[10];
    int roll;
    float marks;
};

struct student student_1 = {"Tina", 12, 88.123};

fwrite(&student_1, sizeof(struct student), 1, outFile);

return(0);
};
