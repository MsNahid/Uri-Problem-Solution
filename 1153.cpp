#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

      int n, i, multiply = 1;

      scanf("%d", &n);
      for(i = n; i >= 1; i--){
          multiply *= i;
      }
      printf("%d\n", multiply);
      return 0;
}

