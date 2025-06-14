#include <stdio.h>

int main() {

    int a, b, c, temp;

    scanf("%d %d %d", &a, &b, &c);

    int x = a;
    int y = b;
    int z = c;

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // Print sorted
    printf("%d\n%d\n%d\n\n", a, b, c);  

    // Print original
    printf("%d\n%d\n%d\n", x, y, z);

    return 0;
}
