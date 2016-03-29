#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    double a, sum = 0.0;
    int cont = 0;

    while(scanf("%lf", &a) == 1){
        if(!(a >= 0.0 && a <= 10.0)){
            printf("nota invalida\n");
        }else{
            sum = sum + a;
            cont++;
        }
        if(cont == 2){
            break;
        }
    }
    printf("media = %0.2lf\n", sum / 2.0);

    return 0;
}
