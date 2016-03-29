#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    double a,b,c,d;
    double avg1, avg2, e;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    avg1 = (a * 2 + b * 3 + c * 4 + d * 1) / 10;
    printf("Media: %0.1lf\n", avg1);
    if(avg1 >= 7.0){
        printf("Aluno aprovado.\n");
    }else if(avg1 < 5.0){
        printf("Aluno reprovado.\n");
    }else if(avg1 >= 5.0 && avg1 <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%lf", &e);
        printf("Nota do exame: %0.1lf\n", e);
        avg2 = (avg1 + e ) / 2;
        if(avg2 >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %0.1lf\n", avg2);
        }else{
            printf("Aluno reprovado.\n");
            printf("Media final: %0.1lf\n", avg2);
        }
    }
    return 0;
}
