#include<stdio.h>
int main()
{
    int n;
    //int m;
    printf("Enter No : ");
    scanf("%d",&n);

    //printf("Enter No : ");
    //scanf("%d",&m);

    //for(int test;test<=m;test++)
    //{
    for(int i=1;i<=n;i++)
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
    for(int i=1;i<=n;i++)
    {
        for(int sp=1;sp<=n-i;sp++)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*i)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //}
    return 0;
}