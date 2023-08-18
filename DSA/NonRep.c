#include <stdio.h>

int main(){
    int n;
    printf("\nEnter N : ");
    scanf("%d",&n);

    int arr[n];

    printf("\nEnter %d Elements : ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<n;i++){
        int fg=0;
        for(int j=0;j<n;j++){
            if(i==j)
                continue;
            if(arr[i]==arr[j]){
                fg=1;
            }
        }
        if(fg==0)
            printf("%d ",arr[i]);
    }

    return 0;
}