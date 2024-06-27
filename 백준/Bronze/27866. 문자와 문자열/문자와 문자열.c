#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000] = "\0";
    int i = 0;

    scanf("%s", a);
    scanf("%d", &i);

    printf("%c", a[i-1]);
    
    return 0;
}