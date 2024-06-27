#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int A, B, C, result = 0;
    char a[5], b[5], c[5], ab[10];
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    printf("%d\n", A + B - C);

    sprintf(a, "%d", A);
    sprintf(b, "%d", B);
    sprintf(c, "%d", C);

    strcpy(ab, a);
    strcat(ab, b);

    result = atoi(ab) - atoi(c);

    printf("%d\n", result);

    return 0;
}