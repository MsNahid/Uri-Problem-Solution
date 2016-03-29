#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    int a, n, i, sum;

    while(scanf("%d", &a) == 1){
            sum = 0;
        scanf("%d", &n);
        while(n <= 0){
            scanf("%d", &n);
        }
            for(i = 0; i < n; i++){
                sum += (a + i);
            }

            printf("%d\n", sum);
    }

    return 0;
}
