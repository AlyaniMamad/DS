#include <stdio.h>

int main(){
    int n;
    printf("\nEnter N : ");
    scanf("%d",&n);

    int arr[n];

    printf("\nEnter %d Elements : ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int k=0;
    printf("\nEnter K : ");
    scanf("%d",&k);

    //Sort
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\n %d th Max : %d",k,arr[n-k]);
    printf("\n %d th Min : %d",k,arr[k-1]);
}