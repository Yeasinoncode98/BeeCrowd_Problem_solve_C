#include<stdio.h>
int main(){

double A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
scanf("%lf %lf %lf",&A,&B,&C);

//TRIANGLE

TRIANGULO = (0.5*A*C);
printf("TRIANGULO: %.3lf\n",TRIANGULO);

//CIRCLE

CIRCULO = (3.14159*C*C);
printf("CIRCULO: %.3lf\n",CIRCULO);

//TRAPIZIUM

TRAPEZIO = ((A+B)*C)/2;
printf("TRAPEZIO: %.3lf\n",TRAPEZIO);

//SQUARE(QUADRADO)

QUADRADO = (B*B);
printf("QUADRADO: %.3lf\n",QUADRADO);

//RECTANGLE

RETANGULO = (A*B);
printf("RETANGULO: %.3lf\n",RETANGULO);

return 0;
}S
