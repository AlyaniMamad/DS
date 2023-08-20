/*
*****
*   *
*   *
*   *
*****
*/#include<stdio.h>
int main()
{
    int no;
    printf("Enter No : ");
    scanf("%d",&no);

    for(int i=1;i<=no;i++)
    {
        for(int j=1;j<=no;j++)
        {
            if(i==1 || j==1 || i==no || j==no)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}