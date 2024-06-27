#include <stdio.h>
#include <string.h>

int main()
{
    int arr[8] = {};
    int ascending[8] = {1,2,3,4,5,6,7,8};
    int descending[8] = {8,7,6,5,4,3,2,1};
    int ascnt = 0, descnt = 0;;

    for(int i=0; i<8; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<8; i++)
    {
        if(arr[i] == ascending[i])
        {
            ascnt++;
        }
    }
    if(ascnt == 8)
    {
        printf("ascending\n");
        return 0;
    }

    for(int i=0; i<8; i++)
    {
        if(arr[i] == descending[i])
        {
            descnt++;
        }
    }
    if(descnt == 8)
    {
        printf("descending\n");
        return 0;
    }

    if(ascnt != 8 && descnt != 8)
    {
        printf("mixed\n");
    }
    return 0;
}