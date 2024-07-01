#include <stdio.h>

int GCD(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int MCM(int a, int b, int gcd_val) 
{
    return (a * b) / gcd_val;
}

int main()
{
    int a,b;

    scanf("%d %d", &a, &b);

    int val_gcd = GCD(a, b);
    int val_mcm = MCM(a, b, val_gcd);

    printf("%d\n%d", val_gcd, val_mcm);
    return 0;
}