#include <stdio.h>

int main() {
    
float N1,N2,N3,N4;
float finalavg;


scanf("%f %f %f %f", &N1,&N2,&N3,&N4);

float avg = (N1*2+N2*3+N3*4+N4*1) / 10;

printf("Media:%.1f\n",avg);

if ( avg >= 7.0) {
    printf("Aluno aprovado.\n");
}
    
else if ( avg < 5.0) {
    printf("Aluno reprovado.\n");
}    

else {
    printf("Aluno em exame.\n");

    float examscore;
    scanf("%f", &examscore);
    printf("Nota do exame: %.1f\n", examscore);

    finalavg = (avg + examscore) / 2.0;

    if (finalavg >= 5.0) {
        printf("Aluno aprovado.\n");
    }
    else {
        printf("Aluno reprovado.\n");
    }

    printf("Media final: %.1f\n", finalavg);
    
}
    
    
    
    
    
    
    
    
    return 0;
}
