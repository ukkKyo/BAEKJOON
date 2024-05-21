#include <stdio.h>

int main()
{
    int a, b, sum;
    while(1)
    {
        scanf("%d %d", &a, &b);
        sum = a+b;
        if(sum == 0)
        {
            break;
        }
        printf("%d\n",sum);
    }
    return 0;
}