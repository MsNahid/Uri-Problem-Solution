#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int t, animal;
    char ch, per = '%';
    int total = 0, frog = 0, rabbit = 0, rat = 0;
    double f_avg, rb_avg, r_avg;

    scanf("%d", &t);
    while(t--){
        scanf("%d %c", &animal, &ch);
        total = total + animal;
        if(ch == 'C') rabbit = rabbit + animal;
        else if(ch == 'R') rat = rat + animal;
        else{
            frog = frog + animal;
        }
    }
    f_avg = (frog * 100.0 ) / total;
    rb_avg = (rabbit * 100.0) / total;
    r_avg = (rat * 100.0) / total;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", total,rabbit,rat,frog);
    printf("Percentual de coelhos: %0.2lf %c\nPercentual de ratos: %0.2lf %c\nPercentual de sapos: %0.2lf %c\n", rb_avg, per, r_avg, per, f_avg, per);

    return 0;


}
