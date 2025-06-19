#include <stdio.h>

int main() {
 
float salary,new_salary,increase;
int percentage;

scanf("%f",&salary);

if (salary <= 400) {
    percentage = 15;
}
else if ( salary <= 800) {
    percentage = 12;
}
else if ( salary <= 1200) {
    percentage = 10;
}
else if ( salary <= 2000) {
    percentage = 7;
}
else {
    percentage = 4;
}

increase = salary * percentage / 100.00;
new_salary = increase + salary;

    printf("Novo salario: %.2f\n", new_salary);
    printf("Reajuste ganho: %.2f\n", increase);
    printf("Em percentual: %d %%\n", percentage);

    return 0;
}


