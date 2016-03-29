#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){

      int n , sum = 0;
      double cont = 0.0;

      while(scanf("%d", &n) == 1){
          if(n < 0){
                break;
          }else{
                cont++;
            sum = sum + n;
          }
      }
      printf("%0.2lf\n", sum / cont);

      return 0;
}
