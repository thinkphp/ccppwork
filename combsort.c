#include <stdio.h>
#include <malloc.h>
#define FIN "algsort.in"
#define FOUT "algsort.out"

void _comb_sort(int *p, int n) {

     float shrinkFactor = 1.3;
     int  swapped, gap = n, i;

      while( gap > 1 || swapped ) {
             
             if(gap > 1) gap = gap / shrinkFactor;

             swapped = 0;

             for(i = 0; i + gap < n; ++i) {

                 if(p[i] > p[i + gap]) {

                    int tmp = p[i];
                        p[i] = p[i+gap];
                        p[i+gap] = tmp;
                        swapped = 1; 
                 } 
             }     
      } 
};

int main() {

    int n, 
        i,
        *p;

    freopen(FIN, "r", stdin);

    scanf("%d", &n);

    p = (int*)malloc(sizeof(int) * n);  

    for(i = 0; i < n; ++i) scanf("%d", p + i);

    _comb_sort(p, n);
 
    for(i = 0; i < n; ++i) printf("%d ", *(p + i)); 


return(0);
}
