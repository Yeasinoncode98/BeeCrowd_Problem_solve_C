#include<stdio.h>
int main(){

int p1code,p1unit;

double p1price;

int p2code,p2unit;

double p2price;

scanf("%d %d %lf",&p1code,&p1unit,&p1price);

scanf("%d %d %lf",&p2code,&p2unit,&p2price);

double gunfol1  =  p1unit*p1price;
double gunfol2  =  p2unit*p2price;

double totalprice = gunfol1 + gunfol2;

printf("VALOR A PAGAR: R$ %.2lf\n",totalprice);

return 0;
}
