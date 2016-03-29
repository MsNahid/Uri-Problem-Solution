#include <stdio.h>

int main(){

    int x;
    double y, consumption;
    scanf("%d %lf", &x, &y);
    consumption = (x / y);
    printf("%0.3lf km/1\n",consumption);
    return 0;
}
