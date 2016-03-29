#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int t,x;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &x);
        if(x < 0){
            if(x % 2 != 0){
                printf("ODD NEGATIVE\n");
            }else{
                printf("EVEN NEGATIVE\n");
            }
        }else if(x == 0){
            printf("NULL\n");
        }else if (x > 0){
            if(x % 2 != 0){
                printf("ODD POSITIVE\n");
            }else{
                printf("EVEN POSITIVE\n");
            }
        }
    }
    return 0;
}
