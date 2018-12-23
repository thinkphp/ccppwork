#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

int main(int argc, int **argv) {

  char  ch;
  FILE *source, *target;
  char source_file[40], target_file[40];
  char *p;

  if(argv[1] == NULL || argv[2] == NULL) { 

         printf("Argv[1] and Argv[2] are missing!\n");   

         exit(EXIT_FAILURE); 
  }

  strcpy(source_file, argv[1]);
  
  source = fopen(argv[1], "r");

  if(source == NULL) {

          printf("\nargv[1] doesn't exit!\nPress any key to exit\n");  

          exit(EXIT_FAILURE); 
   }

   strcpy(target_file, argv[2]);

   target = fopen(target_file, "w");
   
   while((ch = fgetc(source)) != EOF)  fputc(ch, target);

   printf("\nFile compied successfully!\n");

   fclose(source);

   fclose(target);   

  return(0);
}
