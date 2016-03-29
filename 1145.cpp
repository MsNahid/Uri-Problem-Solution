#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    int x, y, i, j;

    scanf("%d %d", &x, &y);
    for(i = 1; i <= y;){
        for(j = 0; j < x; j++){
            printf("%d", i);
            if(j < x - 1)
                printf(" ");
            i++;
        }
        printf("\n");
    }
    return 0;
}
