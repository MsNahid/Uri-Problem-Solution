#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int t, x;
    int in = 0, out = 0;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &x);
        if(x >= 10 && x <= 20)
            in++;
        else
            out++;
    }
    printf("%d in\n%d out\n", in,out);
    return 0;
}
