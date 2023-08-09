#include <stdio.h>

int ispelindrom(int no){
    int orno=no,res=0;
    while(no!=0){
        int rem = no%10;
        res = res*10+rem;
        no/=10;
    }
    if(orno==res){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    int no;
    printf("\nEnter No : ");
    scanf("%d",&no);

    if(ispelindrom(no))
        printf("Yes");
    else
        printf("No");
    

    return 0;
}
