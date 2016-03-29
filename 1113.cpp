#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){

    int x , y;
    while(scanf("%d %d", &x, &y) == 2){
        if(x > y) printf("Decrescente\n");
        else if(x < y) printf("Crescente\n");
        else break;
    }
    return 0;
}
