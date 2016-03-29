#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){

    char animal[15], animl[15], anm[15];
    gets(animal);
    gets(animl);
    gets(anm);

    if(!strcmp(animal , "vertebrado")){
        if(!strcmp(animl, "ave")){
            if(!strcmp(anm, "carnivoro")){
                printf("aguia\n");
            }else if(anm, "onivoro"){
                printf("pomba\n");
            }
        }else if(!strcmp(animl, "mamifero")){
            if(!strcmp(anm, "onivoro")){
                printf("homem\n");
            }else if(!strcmp(anm, "herbivoro")){
                printf("vaca\n");
            }
        }
    }else if(!strcmp(animal, "invertebrado")){
        if(!strcmp(animl, "inseto")){
            if(!strcmp(anm, "hematofago")){
                printf("pulga\n");
            }else if(!strcmp(anm, "herbivoro")){
                printf("lagarta\n");
            }
        }else if(!strcmp(animl, "anelideo")){
            if(!strcmp(anm, "hematofago")){
                printf("sanguessuga\n");
            }else if(!strcmp(anm, "onivoro")){
                printf("minhoca\n");
            }
        }
    }

    return 0;

}
