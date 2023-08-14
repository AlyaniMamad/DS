#include <stdio.h>

int main(){

    int arr[] = {2,1,4,3,5,7,6};

    int n = sizeof(arr)/sizeof(int);


    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

// Time Comp : O(n-square)
// space Comp : O(1)