#include <stdio.h>

int main() {

float A,B,C;
float perimeter;
float Area;

scanf("%f %f %f",&A,&B,&C);

if (A+B >C && A+C>B && B+C>A) {
    perimeter = (A + B + C);
    printf("Perimetro = %.1f\n",perimeter);
    
}

else{
    Area = ((A + B) *C ) / 2;
    printf("Area = %.1f\n",Area);
}

    return 0;
}
