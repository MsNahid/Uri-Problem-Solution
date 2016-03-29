#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){

    double mark, sum = 0.0;
    int cont = 0, x;

    do{
        cont = 0;
        sum = 0.0;
        while(cont < 2){
            scanf("%lf", &mark);
            if(mark >= 0.0 && mark <= 10.0){
                sum += mark;
                cont++;
            }else{
                printf("nota invalida\n");
            }
        }
        printf("media = %0.2lf\n", sum / 2.0);
        do{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &x);
        }while(x < 1|| x > 2);

    }while(x != 2);

    return 0;
}
