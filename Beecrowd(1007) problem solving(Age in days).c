#include <stdio.h>

int main() {

int totaldays,remainingdays,year,month,day;


scanf("%d", &totaldays);

year = totaldays / 365;

remainingdays = totaldays % 365;

month = remainingdays / 30;

day = remainingdays % 30;


printf("%d ano(s)\n",year);
printf("%d mes(es)\n",month);
printf("%d dia(s)\n",day);


    return 0;
}
