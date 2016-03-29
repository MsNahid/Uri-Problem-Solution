#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

      int x, z, sum = 0, i;

      scanf("%d", &x);
      while(scanf("%d", &z) && z <= x);
      for(i = 0; sum <= z;){
            sum += x++;
            i++;
      }

      printf("%d\n", i);
      return 0;
}
