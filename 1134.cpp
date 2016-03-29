#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    int x, alo = 0, gas = 0, die = 0;

    while(scanf("%d", &x) == 1){
        if(x == 1){
            alo++;
        }else if(x == 2){
            gas++;
        }else if(x == 3){
            die++;
        }else if(x == 4){
            break;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", alo, gas, die);
    return 0;
}
