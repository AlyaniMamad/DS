/*
*****
 ****
  ***
   **
    *
*/#include<stdio.h>
int main()
{
    int n;
    printf("Enter No : ");
    scanf("%d",&n);

     for(int i=1;i<=n;i++)
     {
        for(int sp=1;sp<=i;sp++)
        {
            printf(" ");
        }
        for(int j=n;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
     }

    return 0;
}