#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    char name[100];
    double sal,sold, total;
    gets(name);
    scanf("%lf %lf", &sal, &sold);
    total = sal + (sold * 15) / 100;
    printf("TOTAL = R$ %0.2lf\n", total);
    return 0;
}
