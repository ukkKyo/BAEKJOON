#include <stdio.h>
#include <string.h>

int main()
{
    int n, returnVal;
    char arr[6];

    while(1)
    {
        scanf("%d", &n);

        if(n == 0)
        {
            break;
        }

        sprintf(arr, "%d", n);
        returnVal = 1;

        int len = strlen(arr);
        for(int i=0; i<len/2; i++)
        {
            if(arr[i] != arr[len-1-i])
            {
                returnVal = 0;
                break;
            }
        }

        if(returnVal == 1)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}