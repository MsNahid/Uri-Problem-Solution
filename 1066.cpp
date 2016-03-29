#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int a, i;
    int e_cont = 0, o_cont = 0, p_cont = 0, n_cont = 0;
    for(i = 0; i < 5; i++){
        scanf("%d", &a);
        if (a > 0)
            p_cont++;
         if( a < 0)
            n_cont++;
         if(a % 2 == 0)
            e_cont++;
         if(a % 2 != 0)
            o_cont++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", e_cont, o_cont, p_cont, n_cont);
    return 0;
}
