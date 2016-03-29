#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cmath>

using namespace std;

int main(){

    int i_goal, g_goal, cont, input;
    int draw = 0, i_win = 0, g_win = 0;

    scanf("%d %d", &i_goal, &g_goal);
    cont = 1;
    printf("Novo grenal (1-sim 2-nao)\n");
    if(i_goal > g_goal){
        i_win++;
    }else if(i_goal < g_goal){
        g_win++;
    }else{
        draw++;
    }

    while(scanf("%d", &input) == 1){

        if(input != 1) break;
        scanf("%d %d", &i_goal, &g_goal);
        cont++;
        printf("Novo grenal (1-sim 2-nao)\n");
        if(i_goal > g_goal){
           i_win++;
        }else if(i_goal < g_goal){
            g_win++;
        }else{
            draw++;
        }
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", cont, i_win, g_win, draw);
    if(i_win > g_win){
        printf("Inter venceu mais\n");
    }else if(i_win > g_win){
        printf("Gremio in a GRENAL venceu mais\n");
    }else{
        printf("Nao houve vencedor\n");
    }

    return 0;

}

