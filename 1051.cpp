#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    double tax , val, temp, temp2, val2;
    scanf("%lf", &tax);
    if(tax >= 0.00 && tax <= 2000.00){
        printf("Isento\n");
    }else if(tax >= 2000.01 && tax <= 3000.00){
        temp = tax - 2000.00;
        val = (temp * 8) / 100.00;
        printf("R$ %0.2lf\n", val);
    }else if(tax >= 3000.01 && tax <= 4500.00){
        temp = tax - 3000.00;
        val = tax - temp - 2000.00;
        temp = (temp * 18) / 100.00;
        val = (val * 8) / 100.00;
        printf("R$ %0.2lf\n", val + temp);
    }else if(tax > 4500.00){
        temp = tax - 4500.00;
        val = tax - temp - 3000.00;
        val2 = tax - temp - val - 2000.00;
        temp = (temp * 28) / 100.00;
        val = (val * 18) / 100.00;
        val2 = (val2 * 8) / 100.00;
        printf("R$ %0.2lf\n", temp + val + val2);
    }
    return 0;
}
