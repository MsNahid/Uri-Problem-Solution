#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int i, ara[3], maximum;
    for(i = 0; i < 3; i++){
        scanf("%d", &ara[i]);
    }
    maximum = ara[0];
    for(i = 1; i < 3; i++){
        if(maximum < ara[i]){
            maximum = ara[i];
        }
    }
    printf("%d eh o maior\n", maximum);
    return 0;
}

