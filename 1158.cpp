#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

      int ca, x, y, i, sum = 0, cont;

      scanf("%d", &ca);
      while(ca--){
            sum = 0;
            scanf("%d %d", &x, &y);
            for(i = x, cont = 0; cont < y; i++){
                  if(i % 2 != 0){
                        sum = sum + i;
                        cont++;
                  }
            }
            printf("%d\n", sum);
      }
      return 0;
}
