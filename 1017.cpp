#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int t,v;
    double s, fuel_litters;
    scanf("%d %d", &t, &v);
    s = v * t;
    fuel_litters = s / 12;
    printf("%0.3lf\n", fuel_litters);
    return 0;
}
