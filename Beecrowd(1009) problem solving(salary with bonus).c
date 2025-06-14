#include<stdio.h>
int main(){

char name[100];
double salary,onemonthincome,bonus,salarywithbonus;

scanf("%s %lf %lf",name,&salary,&onemonthincome);

bonus = onemonthincome*0.15;

salarywithbonus = bonus+salary;

printf("TOTAL = R$ %.2lf\n",salarywithbonus);

return 0;
}
