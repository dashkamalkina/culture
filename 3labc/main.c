#include <stdio.h>

int main() {
    int a;
    scanf("%o", &a );
    printf("%d \n", a );
    printf("%o \n", a>>1);
    printf("%o \n", ~a);
    int x;
    scanf("%o", &x);
    printf("%o \n", (a^x));

    return 0;
}
