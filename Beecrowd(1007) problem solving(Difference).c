#include<stdio.h>
int main()
{
    int A,B,C,D,DIFERENCA;

    scanf("%d %d %d %d",&A,&B,&C,&D); // A-5,B-6,C-7,D-8

    DIFERENCA = (A*B-C*D);

    printf("DIFERENCA = %d\n",DIFERENCA);
    return 0;
}
