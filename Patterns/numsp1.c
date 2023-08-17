// 1
// 01
// 101
// 0101
// 10101

#include <stdio.h>

int main(){

    int n;
    printf("\nEnter N :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            if((i+j)%2==0){
                printf("0 ");
            }else{
                printf("1 ");
            }
        }
        printf("\n");
    }

    return 0;
}