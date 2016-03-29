#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

      double s = 1.0;
      int i;

      for(i = 2; i <= 100; i++){
           s += 1.0 / i;
      }
      printf("%0.2lf\n", s);

      return 0;
}
