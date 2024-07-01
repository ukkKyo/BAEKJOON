#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int N, num, cnt = 0;

    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        scanf("%d", &num);
        if(isPrime(num))
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}