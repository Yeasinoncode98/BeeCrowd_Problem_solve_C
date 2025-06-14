#include<stdio.h>
int main(){

int serial,wphim;
double dollar,salary;

scanf("%d %d %lf",&serial,&wphim,&dollar);

salary = (wphim * dollar);

printf("NUMBER = %d\n",serial);
printf("SALARY = U$ %.2lf\n",salary);

return 0;
}
