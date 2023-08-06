// 10 20 30 40 50 
// 2 4 3 1

#include <stdio.h>

int main(){

    int arr1[] = {10,20,40,50,30};
    int test[] = {2,4,3,1};

    int n=sizeof(arr1)/sizeof(int);
    int m=sizeof(test)/sizeof(int);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr1[i]>arr1[j]){
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
            if(test[i]>test[j]){
                int temp = test[i];
                test[i] = test[j];
                test[j] = temp;
            }
        }
    }
    int sum=0;
    for(int i=0;i<m;i++){
        arr1[i]*=test[i];
        sum +=arr1[i];
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    printf("%d",sum);
    return 0;
}