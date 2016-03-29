#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    int n, i, j, k, val, sqr, volume;

    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        val = i, sqr = i * i, volume = i * i * i;
        for(j = 1; j <= 2; j++){
            if(j == 1){
                printf("%d %d %d\n", val, sqr, volume);
            }else{
                printf("%d %d %d\n", val, sqr + 1, volume + 1);
            }
        }
    }

    return 0;

}
