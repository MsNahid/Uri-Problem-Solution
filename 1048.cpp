#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    double sal, p_sal,earned_salary;
    scanf("%lf", &sal);
    if(sal >= 0.00 && sal <= 400.00){
        p_sal = (15 * sal) / 100;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %d %c\n",p_sal + sal, p_sal,15,'%');

    }else if(sal >= 400.01 && sal <= 800.00){
        p_sal = (12 * sal) / 100;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %d %c\n",p_sal + sal, p_sal,12,'%');

    }else if(sal >= 800.01 && sal <= 1200.00){
        p_sal = (10 * sal) / 100;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %d %c\n",p_sal + sal, p_sal,10,'%');
    }else if(sal >= 1200.01 && sal <= 2000.00){
        p_sal = (7 * sal) / 100;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %d %c\n",p_sal + sal, p_sal,7,'%');
    }else{
        p_sal = (4 * sal) / 100;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %d %c\n",p_sal + sal, p_sal,4,'%');

    }
    return 0;
}

