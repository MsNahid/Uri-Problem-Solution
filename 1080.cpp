#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int ara[105],i,maximum, possition;
    for(i = 0; i < 100; i++) scanf("%d",&ara[i]);

    maximum = 0;
    for(i = 0; i < 100; i++){
        if(ara[i] > maximum){
            maximum = ara[i];
            possition = i + 1;
        }
    }
    printf("%d\n%d\n", maximum, possition );
}
