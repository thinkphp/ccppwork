#include <stdio.h>
#include <malloc.h>
#define FIN "hajnal.in"
#define FOUT "hajnal.out"

void _bs(int *p, int n) {
 
     int swapped, 

         i, 
 
         finished = 0, 

         size = n;

         while( !finished ) {

                swapped = 0;

                for(i = 0; i < size - 1; ++i) {

                    if(p[i] > p[i+1]) {

                        int holder = p[i];
                            p[i] = p[i+1];
                            *(p + i + 1) = holder;
                            swapped = 1;  
                    }  
                }   

                if( swapped ) size--; else finished = 1;
         }

}

int main() {

    int n, i, *p;

    freopen(FIN, "r", stdin);

    freopen(FOUT, "w", stdout);

    scanf("%d", &n);

    p = (int*)malloc(sizeof(int)*n);

    for(i = 0; i < n; ++i) scanf("%d", p + i);

    _bs(p, n); 

    for(i = 0; i < n; ++i) printf("%d ", *(p + i)); 

    free( p );
 
return(0);
}
