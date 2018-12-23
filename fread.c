#include <stdio.h>
#include <stdlib.h>

struct employee {

       char name[50];
       char designation[50];
       int age;
       float salary;  
};

char line[121];

int main() {

    FILE *inFile;
    struct employee input;

          inFile = fopen("fread.in", "r");

          if(inFile == NULL) {

             printf("Error opening file\n");

             exit(1);    

          }

    printf("Testing fread() function\n\n");
/*
    //read from file input till and of file
    while( fread(&input, sizeof( struct employee ), 1, inFile) )
    {
           printf("Name: %.10s \n", input.name);           
           printf("Designamtion: %.10s \n", input.designation);           
           printf("Name: %d \n", input.age);           
           printf("Name: %.2f \n\n",input.salary);                      
    }
*/

        while(fgets(line, 120, inFile)) {

              printf("%s\n", line); 
        }      

    fclose(inFile);

 return(0);
}
