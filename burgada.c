#include <stdio.h>
#define DIM 100

int stack[DIM],
    level,
    n;

void init() {

     stack[ level ] = 0;
}

int val() {

    int i;

    for(i = 1; i < level; ++i) 

        if(stack[i] == stack[level]) return 0;

    return 1;        
}



void print_r() {

     int i;

     for(i = 1; i <= n; ++i) printf("%d ", stack[i]); 

     printf("\n");
}

int succ() {

    if(stack[level] < n) {

       stack[level]++;

       return 1;  

    }

    return 0;
}

int sol() {
    
    return level == n;  
}

void bk() {

     int hs, is; 

     level = 1;

     init();

     while(level > 0) {

           hs = 1; is = 0;

           while(hs && !is) {
                 
                hs = succ();
  
                if(hs) is = val();                  
           }

           if( hs ) {

               if(sol()) print_r();

                      else {level++; init();}

           } else level--;
     }   
}

int main(int argc, char *argv[]){

    n = atoi(argv[1]);

    bk();
 
 return(0);
}
