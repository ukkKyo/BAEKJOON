#include <stdio.h>

int main()
{
    int M = 0, N;
    float avg = 0;

    scanf("%d", &N);
    int score[N];

    for(int i=0; i<N; i++)
    {
        scanf("%d", &score[i]);

        if(M < score[i])
        {
            M = score[i];
        }

    }
    for(int i=0; i<N; i++)
    {
        avg += (float)score[i]/M*100;
    }
    printf("%f\n", avg/N);
    return 0;
}