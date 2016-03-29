#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int ara[3], i, j, a, b,t, temp;
    int ara2[3];
    for(i = 0; i < 3; i++){
        scanf("%d", &ara[i]);
    }
    for(i = 0; i < 3; i++) ara2[i] = ara[i];
    for(a = 1; a < 3; a++)
    for(b = 3 - 1; b >= a; b--){
        if(ara[b - 1] > ara[b]){
            t = ara[b - 1];
            ara[b - 1] = ara[b];
            ara[b] = t;
        }
    }
    for(i = 0; i < 3; i++) printf("%d\n", ara[i]);

    printf("\n");
    for(i = 0; i < 3; i++) printf("%d\n", ara2[i]);

    return 0;
}
