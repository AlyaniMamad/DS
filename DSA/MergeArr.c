#include <stdio.h>

int main(){
    int n,m;
    printf("\nEnter N : ");
    scanf("%d",&n);
    printf("\nEnter M : ");
    scanf("%d",&m);

    int arr[n];
    int arr2[m];

    printf("\nEnter %d Elements : ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nEnter %d Elements : ",n);
    for(int i=0;i<m;i++)
        scanf("%d",&arr2[i]);


    arr[m+n];
    int j=0;
    for(int i=n;i<(m+n);i++){
        arr[i] = arr2[j];
        j++;
    }

    for(int i=0;i<m+n;i++)
        printf("%d ",arr[i]);

    return 0;
}