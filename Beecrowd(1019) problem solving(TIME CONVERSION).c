#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);

// 60 sec = 1min
// 60 * 60 = 3600 seconds = 1hour
// 556 sec ke 60min die vag korle jeta ashe oita 9 minutes then jeta
// vagsesh theke jai oita seconds


    int hour, minute, second,vagsesh;

    hour =   N / 3600;

    vagsesh = N % 3600;

    minute = vagsesh / 60;

    vagsesh = vagsesh % 60;

    second = vagsesh / 1;


    printf("%d:%d:%d\n",hour,minute,second);

    return 0;
}
