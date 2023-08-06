//Rotate Arrray 

#include <stdio.h>

int main(){

    int n,N,i=0;
    printf("\nEnter n: ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter N: ");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&N);
    printf("\nEnter Elements : ");
    
    int newarr[n],j=0;

    for(i=N;i<n;i++){
        newarr[j] = arr[i];
        j++;
    }
    for(i=0;i<N;i++){
        newarr[j]=arr[i];
        j++;
    }

    printf("New Array : ");
    for(i=0;i<n;i++)
        printf("%d ",newarr[i]);

    return 0;
}