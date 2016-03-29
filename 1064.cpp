#include <iostream>
#include <cstdio>

using namespace std;

int  main(){
    int i, cont = 0;
    double number, average , sum = 0;;
    for(i = 0 ; i < 6; i++){
        scanf("%lf", &number);
        if(number > 0){
                cont++;
                sum = sum + number;
        }
    }
    average = sum / cont;
    printf("%d valores positivos\n%0.1lf\n", cont,average);
    return 0;
}
