// Input: arr[6] = [1, 90, 34, 89, 7, 9]
// Output: 1 7 9 90 89 34

#include <stdio.h>

int main(){

    int arr[6] = {1, 90, 34, 89, 7, 9};

    int n = sizeof(arr)/sizeof(int);
    int mid = n/2;

    for(int i = 0 ; i<n ; i++){
            printf("%d ",arr[i]);
        }
        printf("\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<mid;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        for(int j=mid;j<n-1;j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0 ; i<n ; i++){
            printf("%d ",arr[i]);
        }

    return 0;
}
