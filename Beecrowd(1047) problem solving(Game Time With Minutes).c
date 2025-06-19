#include <stdio.h>

int main() {
 
int starthour,endhour,startmin,endmin;

int totalstart,totalend,duration,hours,minutes;

scanf("%d %d %d %d",&starthour,&startmin,&endhour,&endmin);

//start Hour = 7
//start min = 8

//end hour = 9
//end min = 10

totalstart = starthour * 60 + startmin;
totalend = endhour * 60 + endmin;

if (totalend <= totalstart) {
    duration = (24 * 60 - totalstart) + totalend;
}

else {
    duration = totalend - totalstart;
}

hours = duration / 60;
minutes = duration % 60;


 printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);



    return 0;
}


