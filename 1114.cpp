#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){

    int password;

    while(scanf("%d", &password) == 1){
        if(password != 2002){
            printf("Senha Invalida\n");
        }else{
            printf("Acesso Permitido\n");
            break;
        }
    }
    return 0;
}
