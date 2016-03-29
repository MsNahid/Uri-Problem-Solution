#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

      int x, sum, cont, i;

      while(scanf("%d", &x) == 1){
          if(x == 0) break;
          sum = 0;
          cont = 0;
          for(i = x ; ; i++){
            if(i % 2 == 0){
                  sum = sum + i;
                  cont++;
            }
            if(cont == 5) break;
          }
          printf("%d\n", sum);
      }

      return 0;
}
