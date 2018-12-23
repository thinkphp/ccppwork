#include <iostream>
#define limit 100

int stack[limit], 
    n;

int valid(int level) {

    for(int i = 1; i < level; ++i) {

        if(stack[i] == stack[level]) return 0;  
    }

    return 1;
}

void printSol() {

   for(int i = 1; i <= n; ++i) {

           std::cout<<stack[i]<<" ";
   }

   std::cout<<"\n";
}

using namespace std;

void bk(int level) {

     for(int i = 1; i <= n; ++i) {

         stack[level] = i;

         if(valid(level)) 

            if(level == n) printSol();

                     else 

                           bk(level+1);
            
     }
 }

int main(int argc, char *argv[]) {

    n = 3;

    bk(1);   

return(0);

}
