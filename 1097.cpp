#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){

    int i , j, cont = 0;
    for(i = 1, j = 7; i <= 9; j--){
        cont++;
        printf("I=%d J=%d\n", i,j);
        if(cont == 3){
            cont = 0;
            i = i + 2;
            j = j + 5;
        }
    }
    return 0;
}
