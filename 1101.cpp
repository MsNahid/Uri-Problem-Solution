#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){

    int m, n, sum = 0;
    int i;
    while(scanf("%d %d", &m, &n) == 2){
        if(m > 0 && n > 0){
            sum = 0;
            if(m > n){
                for(i = n; i <= m; i++){
                    sum = sum + i;
                    printf("%d ", i);
                }
                printf("Sum=%d\n", sum);
            }else{
                sum = 0;
                for(i = m; i <= n; i++){
                    sum = sum + i;
                    printf("%d ", i);
                }
                printf("Sum=%d\n", sum);
            }
        }else{
            break;
        }
    }
}
