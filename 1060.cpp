#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int i, cont = 0;
    double number;
    for(i = 0 ; i < 6; i++){
        scanf("%lf", &number);
        if(number > 0){
                cont++;
        }
    }
    printf("%d valores positivos\n", cont);
    return 0;
}
