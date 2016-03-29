#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

      double s = 1.0;
      int i , j;

      for(i = 2, j = 3; j <= 39; i = i * 2, j += 2){
            s += ((double) j) / ((double) i);
      }
      printf("%0.2lf\n", s);

      return 0;
}
