#include <stdio.h>

int main() {

double salary,tax=0;

scanf("%lf",&salary);

if(salary <= 2000.00) {
    printf("Isento\n");
}

else {
    if(salary > 4500.00) {
        tax += (salary - 4500.00 ) * 0.28;
        salary = 4500.00;
    }
    
    if(salary > 3000.00) {
        tax += (salary - 3000.00 ) * 0.18;
        salary = 3000.00;
    }
    
    if(salary > 2000.00) {
        tax += (salary - 2000.00 ) * 0.08;
        salary = 2000.00;
    }
    
    
    
    
     printf("R$ %.2lf\n", tax);
    
}

    return 0;
}


