#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    double a, b, c;
    double perimeter, t_area;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a + b > c && b + c > a && c + a > b){
        perimeter = a + b + c;
        printf("Perimetro = %0.1lf\n", perimeter);
    }else{
        t_area =((a + b) * c) / 2;
        printf("Area = %0.1lf\n", t_area);
    }
    return 0;

}
