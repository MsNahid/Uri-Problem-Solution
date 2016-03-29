#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int t;
    double a, b, c, avg;
    scanf("%d", &t);
    while(t--){
        scanf("%lf %lf %lf", &a, &b, &c);
        avg = a * 2.0 + b * 3.0 + c * 5.0 ;
        printf("%0.1lf\n", avg / 10.0);
    }

    return 0;
}
