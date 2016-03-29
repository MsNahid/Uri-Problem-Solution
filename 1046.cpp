#include <cstdio>
#include <iostream>

using namespace std;

int main(){

    int a, b, d;
    scanf("%d %d", &a, &b);
    if(a >= b){
        d = (24 - a) + b;
        printf("O JOGO DUROU %d HORA(S)\n",d);
    }else{
        d = b - a;
        printf("O JOGO DUROU %d HORA(S)\n",d);
    }
    return 0;
}
