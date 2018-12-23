#include <bits/stdc++.h>
#define dim 100

typedef unsigned int nat;
int level, stack[dim];
nat n;

void init() {

     stack[level] = 0;
}

nat sol() {

    return level == n;
}

void p_r_i_n_t() {

         for(nat i = 1; i <= n; ++i) std::cout<<stack[i]<<" ";     
         std::cout<<"\n";
}

nat succ() {
    if(stack[level] < n) {
       stack[level]++;
       return 1;   
    } 
    return 0;
}

nat val() {

    for(nat i = 1; i < level; ++i) 

       if(stack[i] == stack[level]) return 0;

    return 1;
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

           if(hs) {

                  if(sol()) p_r_i_n_t();

                     else { level++; init(); }
                     
           } else level--;
            
     }  
}

int main(int argc, char *argv[]) {

 int n2;

 n2 = atoi(argv[1]);

 n = nat(n2);

 bk();

 return(0);
}
