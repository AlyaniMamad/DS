#include<stdio.h>
int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int sp=0;sp<n-i-1;sp++)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*n)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}