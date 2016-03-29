#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double a,b;
    scanf("%lf %lf", &a, &b);
    printf("MEDIA = %0.5lf\n", (a * 3.5 + b * 7.5) / (3.5 + 7.5));
    return 0;

}

