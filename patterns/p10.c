#include<stdio.h>
int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++)
    {
        for(int sp=1;sp<=i;sp++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*(n-i)-1;j++)
        {
            printf("*");
        }
        
        printf("\n");
    }


    return 0;
}