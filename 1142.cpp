#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    int x, i, j, k = 0;
    scanf("%d", &x);

    for(i = 0; i < x; i++){
        for(j = 0; j < 3;){
            k++;
            if(k % 4 != 0){
                printf("%d ", k);
                j++;

            }

        }
        printf("PUM\n");
    }

    return 0;
}

