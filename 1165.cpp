#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int is_prime(int n){

      int i, root;
      if(n == 2){
            return 1;
      }
      if(n % 2 == 0){
            return 0;
      }
      root = int(sqrt((double)n));
      for(i = 3; i <= root; i = i + 2){
            if(n % i == 0){
                  return 0;
            }
      }
      return 1;
}

int main(){

      int ca, n;

      scanf("%d", &ca);
      while(ca--){
           scanf("%d", &n);

           if(1 == is_prime(n)){
                  printf("%d eh primo\n", n);
           }else{
                 printf("%d nao eh primo\n", n);
           }
      }
      return 0;
}
