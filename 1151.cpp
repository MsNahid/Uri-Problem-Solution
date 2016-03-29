#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

      int ara[50];
      int i, j, n;

      ara[0] = 0;
      ara[1] = 1;
      for(i = 2; i < 50; i++){
            ara[i] = ara[i - 1] + ara[i - 2];
      }
      scanf("%d", &n);
      for(i = 0; i < n; i++){
            int val = n - 2;
            printf("%d", ara[i]);
            if(i <= val){
                  printf(" ");
            }else{
                  printf("\n");
            }
      }

      return 0;
}
