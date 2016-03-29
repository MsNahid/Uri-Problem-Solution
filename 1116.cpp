#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){

    int n, x, y;
    double result;
    scanf("%d", &n);

    while(n--){
        scanf("%d %d", &x, &y);
        if( y == 0){
            printf("divisao impossivel\n");
        }else{
            result = (float)x / (float)y ;
            printf("%.1lf\n", result);
        }
    }
    return 0;
}
