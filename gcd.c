#include <stdio.h>

void euclid_iterative(int a, int b, int *d) {

     int r;

     while(b) {

           r = a % b;
           a = b;
           b = r; 
     }   

     *d = a; 
}

void _euclid(int a, int b, int *ref) {

     while(a!=b) {

       if(a>=b) a -= b;

           else b -= a; 
     } 
 
     *ref = a;
}

void _euclid_(int a, int b, int *ref) {

    if(a == b) *ref = a;

        else if(a >= b) return _euclid_(a-b, b, ref);

                   else 

                        return _euclid_(a, b-a, ref);

}
void euclid_recursive(int a, int b, int *gcd) {

     if(b == 0) *gcd = a;

       else 
                return euclid_recursive(b, a % b, gcd);

}

int main(int argc, char *argv[]) {

    int a, 
        b;
        a = atoi(argv[1]);
        b = atoi(argv[2]);
    int d;     
        _euclid_(a, b, &d);

    printf("%d", d);
}
