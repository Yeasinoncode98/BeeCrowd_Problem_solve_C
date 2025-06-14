#include<stdio.h>
#include<math.h>

int main()
{
    double x1,y1;
    double x2,y2;
    double p1,p2;

    double sum;
    double result;

    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);

    p1= (x2-x1)*(x2-x1);

    p2= (y2-y1)*(y2-y1);

    sum =(p1+p2);

    result = sqrt(sum);

    printf("%.4lf\n",result);

    return 0;
}
