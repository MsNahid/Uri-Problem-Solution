#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    int i, val,sqr;
    scanf("%d", &val);
    for(i = 2; i <= val; i++){
        if(i % 2 == 0){
            sqr = pow(i,2);
            printf("%d^2 = %d\n",i,sqr);
        }
    }
    return 0;

}
