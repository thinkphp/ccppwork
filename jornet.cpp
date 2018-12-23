#include <iostream>

typedef unsigned int natural;

namespace Algorithm {

         namespace Erathostene {

                   natural getCount(natural n) {

                           bool isPrime[n+1];

                           natural totalPrimes = n - 1;

                           for(natural  i = 2; i <= n; ++i) isPrime[i] = true;
                           
                           for(natural i = 2; i*i <= n; ++i) {

                               if( isPrime[i] ) {

                                   natural j = 2;

                                   while(i*j <= n) {

                                         natural multiple = i * j;                                        

                                         if (isPrime[multiple]) totalPrimes--;

                                         isPrime[multiple] = false; 

                                         j++;  
                                   }  
                               }
                           }  

                           return totalPrimes; 
                   }                    

                   void displayPrimes(natural n) {

                        bool isPrime[n + 1 ];                        

                        for(natural i = 2; i <= n; ++i) isPrime[i] = true;

                        for(natural i = 2; i * i <= n; ++i) {

                            if(isPrime[i]) {

                                 natural j = 2;

                                 while(i*j <= n) {

                                      natural multiple = i * j;

                                      isPrime[multiple] = false;

                                      j++; 
                                 }  
                            } 

                        }
 
                        for(natural i = 2; i <= n; ++i)
                                if(isPrime[i]) std::cout<<i<<" "; 

                   }
         } 
}


int main(int argc, char *argv[]) {

    natural n; 
    std::cin>>n;
    std::cout<<Algorithm::Erathostene::getCount(n)<<"\n"; 
    Algorithm::Erathostene::displayPrimes(n);  

return(0);
}
