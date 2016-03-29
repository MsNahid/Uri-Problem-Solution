#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int i, start, finish, sum = 0;;
    scanf("%d %d", &finish, &start);
    for(i = start + 1; i < finish; i++){
        if(i % 2 != 0){
            sum = sum + i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
