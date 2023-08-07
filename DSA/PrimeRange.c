#include <stdio.h>

int isprime(int no){
    if(no<2){
        return 0;
    }else{
        int x = no/2;
        for(int i=2;i<x;i++){
            if(no%i==0){
                return 0;
            }
        }
    }
    return 1;
}

int main(){

    int N;
    printf("\nEnter N : ");
    scanf("%d",&N);

    for(int i=0;i<=N;i++){
        if(isprime(i)){
            printf("%d ",i);
        }
    }

    return 0;
}