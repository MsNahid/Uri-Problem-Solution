#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int a, i;
    scanf("%d", &a);

    for(i = a; i <= a + 11 ; i ++){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }
    return 0;

}
