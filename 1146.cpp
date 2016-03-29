#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    int x, i;

    while(scanf("%d", &x) == 1){
            int val = x - 1;
        for(i = 1; i <= x; i++){
            printf("%d", i);
            if(i <= val){
                printf(" ");
            }else if(i <= x){
                printf("\n");
            }
        }
        if(x == 0) break;
    }

    return 0;
}
