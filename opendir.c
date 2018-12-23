/**
   This example reads the contents of a root directory.

   Reference: https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.3.0/com.ibm.zos.v2r3.bpxbd00/rtread.htm
 
 */
#include <stdio.h>
#include <dirent.h>
#include <errno.h>

int main() {

    DIR *dir;
    struct dirent *entry;   

    if((dir = opendir("/home/adrian")) == NULL)  {

        perror("opendir() error");     

    } else {

        puts("Contents of root:");

        while((entry = readdir(dir)) != NULL )  

               printf(" %s\n", entry->d_name);

        closedir( dir ); 
    }

    return(0);
};
