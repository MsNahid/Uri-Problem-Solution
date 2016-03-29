#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int intial_hour, intial_minute,final_hour,final_minute;
    int hour, minute;
    scanf("%d %d %d %d", &intial_hour, &intial_minute, &final_hour, &final_minute);
    hour = final_hour - intial_hour;
    if(hour < 0){
        hour = 24 + (final_hour - intial_hour);
    }
    minute = final_minute - intial_minute;
    if(minute < 0){
        minute = 60 + (final_minute - intial_minute);
        hour--;
    }
    if(intial_hour == final_hour && intial_minute == final_minute){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);
    }
    return 0;
}
