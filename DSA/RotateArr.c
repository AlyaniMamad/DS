#include <stdio.h>

int main()
{
    int n, k;
    printf("\nEnter N : ");
    scanf("%d", &n);

    int arr[n],newarr[n];

    printf("\nEnter %d Elements : ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nENter K : ");
    scanf("%d",&k);

    for(int i=0;i<n-k;i++){
        newarr[i+k] = arr[i];
    }
    int j=0;
    for(int i=n-k;i<n;i++){
        newarr[j] = arr[i];
        j++;
    }

    for(int i = 0;i<n;i++)
        printf("%d ",newarr[i]);

    return 0;

}