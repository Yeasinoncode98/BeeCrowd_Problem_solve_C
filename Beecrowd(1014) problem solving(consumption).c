#include<stdio.h>
int main()
{
    double x; // travelled distance
    double y; // fuel cost per liter
    double CONSUMPTION;

    scanf("%lf %lf",&x,&y);

    CONSUMPTION= (x/y);
    printf("%.3lf km/l\n",CONSUMPTION);

    return 0;
}
