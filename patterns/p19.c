#include<stdio.h>
int main()
{
    int n;
    printf("enter no : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int sp=1;sp<=n-i;sp++)
        {
            printf(" ");
        }
        for (int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}