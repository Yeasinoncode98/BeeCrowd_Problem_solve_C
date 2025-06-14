#include<stdio.h>
#include<stdlib.h>

// if we want we can ignore stdio<lab.h> header file


int main()
{
    int a, b, c, greatest;

    scanf("%d %d %d",&a,&b,&c);

    greatest = (a + b + abs(a-b))/2;

    greatest = (greatest + c + abs(greatest - c))/2;

    printf("%d eh o maior\n",greatest);


    return 0;
}
