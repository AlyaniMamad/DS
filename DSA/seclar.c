#include <stdio.h>

int main(){

    int n;
    printf("\nEnter N :");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d Elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[0],secmax=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secmax = max;
            max=arr[i];
        }
        if(arr[i]>secmax && arr[i]<max){
            secmax=arr[i];
        }
    }

    printf("Max : %d",max);
    printf("\nSecond-Max : %d",secmax);

    return 0;
}