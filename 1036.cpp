#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    double a, b,c,multiply;
    double sqt, temp, equation1, equation2;
    scanf("%lf %lf %lf", &a, &b, &c);
    sqt = (pow(b, 2) - (4 * a * c));
    multiply = 2 * a;
    temp = sqrt(sqt);
    equation1 = (- b + temp) / multiply;
    equation2 = (-b - temp) / multiply;
    if(multiply != 0 && sqt > 0){
        printf("R1 = %0.5lf\nR2 = %0.5lf\n", equation1, equation2);
    }else{
        printf("Impossivel calcular\n");
    }
    return 0;
}
