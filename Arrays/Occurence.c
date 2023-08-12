#include <stdio.h>

int main(){

    int n;
    printf("\nEnter N : ");
    scanf("%d",&n);

    int arr[n],occ[n];
    printf("\nEnter %d Elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

        occ[i]=-1;
    }

    for(int i=0;i<n;i++){
        int cnt = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
                occ[j]=0;
            }
        }
        if(occ[i]!=0){
            occ[i]=cnt;
        }
    }

    for(int i=0;i<n;i++){
        if(occ[i]!=0){
            printf("\n%d Occured %d Times",arr[i],occ[i]);
        }
    }

    return 0;

}
