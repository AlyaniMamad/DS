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

    int j=0;
    for(int i=0;i<n/2;i++){
        newarr[j]=arr[i];
        j+=2;
    }
    j=1;
    for(int i=n/2;i<n;i++){
        newarr[j] = arr[i];
        j+=2;
    }
    printf("\nOriginal Array : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]); 
    printf("\nShuffled Array : ");
    for (int i = 0; i < n; i++)
        printf("%d ", newarr[i]); 
        
    return 0;
}