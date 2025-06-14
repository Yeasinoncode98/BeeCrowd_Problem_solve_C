#include<stdio.h>
int main()
{
    double spenttime;
    double avgspeed;
    double distanceS;

    scanf("%lf %lf",&spenttime,&avgspeed);

    distanceS= (spenttime*avgspeed) / 12 ;

    printf("%.3lf\n",distanceS);

    return 0;
}
