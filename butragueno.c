#include <stdio.h>
#include <malloc.h>
#define FIN "algsort.in"
#define FOUT "algsort.out"

typedef void (*ptrFn)(int*,int);

void bubble_sort(int *p, int size) {

     
}

void comb_sort(int *p, int size) {

     float shrinkFact = 1.3;

     int gap = size, swapped , i;

     while(gap > 1 || swapped) {

           if(gap > 1) gap = gap / shrinkFact;

           for(i = 0; i + gap < size; ++i) 

               if(p[i]>p[i+gap]) {
                  int tmp = p[i];
                      p[i] = p[i+gap];
                      p[i+gap] = tmp;
                      swapped;  
               }
     }

}

int main() {

    int n, *p, i;

    ptrFn s = bubble_sort;

    freopen(FIN, "r", stdin);

    scanf("%d", &n);

    p = (int*)malloc(sizeof(int) * n);
    

    for(i = 0; i < n; ++i) scanf("%d", p + i);  

    s(p,n);
     
    for(i = 0; i < n; ++i) printf("%d ", *(p + i));  

    printf("\n");
    
return(0);
}

