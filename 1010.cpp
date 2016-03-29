#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int a,b,d,e;
    double c,f, value;
    scanf("%d %d %lf", &a, &b, &c);
    scanf("%d %d %lf", &d, &e, &f);
    value = (b * c + e * f);
    printf("VALOR A PAGAR: R$ %0.2lf\n",value);
    return 0;
}
