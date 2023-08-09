#include <stdio.h>

void traverse(int myarr[],int n,int i){
    if(i>=n)
        return;
    
    printf("%d ",myarr[i]);
    traverse(myarr,n,i+1);
}
int main(){

    int myarr[]={1,2,3,4,5,6};
    int n=sizeof(myarr)/sizeof(int);

    traverse(myarr,n,0);

    return 0;
}