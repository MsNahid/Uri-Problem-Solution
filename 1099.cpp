#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){

    int t, x, y, sum , i;
    scanf("%d", &t);
    while(t--){
            sum = 0;
        scanf("%d %d", &x, &y);
        if(x < y){
            sum = 0;
            for(i = x + 1; i < y; i++){
            if(i % 2 != 0){
                sum = sum + i;
            }
        }
        }

        if(x > y){
            sum = 0;
            for(i = y + 1; i < x; i++){
            if(i % 2 != 0){
                sum = sum + i;
            }
        }
        }



    printf("%d\n", sum);

    }
    return 0;
}
